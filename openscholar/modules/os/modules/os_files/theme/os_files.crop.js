/**
 @file

 Use the Media Browser to select an image to crop
*/
(function ($) {

Drupal.behaviors.osFilesImageCropBrowser = {
  attach: function (ctx) {
    $('.media-button', ctx).each(function () {
      var element_settings = {},
        id = $(this).attr('id'),
        target = $(this).parent().find('[name$="[fid]"]');

      target.attr('id', id.replace('selected-file', 'fid'));

      // Ajax submits specified in this manner automatically submit to the
      // normal form action.
      element_settings.url = $(this).attr('data-ajax_url');
      // Form submit button clicks need to tell the form what was clicked so
      // it gets passed in the POST request.
      element_settings.setClick = true;
      // Form buttons use the 'click' event rather than mousedown.
      element_settings.event = 'change';
      element_settings.wrapper = id.replace('selected-file', 'ajax-wrapper');
      // Clicked form buttons look better with the throbber than the progress bar.
      element_settings.progress = { 'type': 'throbber' };
      element_settings.submit = {
        js: true,
        _triggering_element_name: target.attr('name').replace('[fid]', '')
      };

      var root = $(this).parents('.form-wrapper');

      var base = target.attr('id');
      Drupal.ajax[base] = new Drupal.ajax(base, target[0], element_settings);

    }).click(mediaButtonClick);
  }
}

  function mediaButtonClick(e) {
    var settings = {
      types: ['image']
    },
      self = this;
    Drupal.media.popups.mediaBrowser(function (selected) {
      // construct the html fragment and put it in place
      console.log(selected);
      if (selected.length == 0) {
        // remove cropping html
      }
      else {
        var file = selected[0],
          id = $(self).attr('id').replace('selected-file', '');

        $('#'+id+'fid').val(file.fid).change();
      }
    }, settings);
    return false;
  }

})(jQuery);