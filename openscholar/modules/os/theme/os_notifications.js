/**
 * jQuery behaviors for platform notification feeds.
 */
(function ($) {
  Drupal.behaviors.os_notifications = {
    attach: function (context) {

      // Setup.
      var menuLinkSel = '#os-notifications-menu-link';
      $(menuLinkSel).attr('href', '#');

    }
  };
})(jQuery);
