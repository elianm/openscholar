/**
 * Handles toggling of the visibility parameter
 */
(function ($) {
Drupal.behaviors.osPagesOutline = {
  attach: function (ctx) {
    $('.form-checkbox').change(toggleChild);
  }
}

function toggleVisibility(e) {
  if ($(e.target).attr('data-disabled') == 'true') return false;

  var input = $(e.target).parent().find('input');

  input.val(Math.abs(input.val()-1));
  if (parseInt(input.val())) {
    e.target.innerHTML = Drupal.t('Hide');
  }
  else {
    e.target.innerHTML = Drupal.t('Show');
  }

  toggleChildren(input.parents('tr').find('.book-mlid').val());
  return false;
}

function toggleChildren(mlid, value) {
  $('.book-plid[value='+mlid+']').each(function () {
    var row = $(this).parents('tr'),
        box = row.find('.form-checkbox').get(0);
    box.checked = value;
    box.disabled = value;
    toggleChildren(row.find('.book-mlid').val());
  });
}

  function toggleChild(e) {
    var box = e.target,
      mlid = $(box).parents('tr').find('.book-mlid').val();

    toggleChildren(mlid, box.checked);
  }
})(jQuery)