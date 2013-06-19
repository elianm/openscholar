Feature:
  In order to create a new site
  as a Harvard-affiliated visitor
  I want to be redirected to Harvard PIN to be authenticated first.

  @api
  Scenario Outline: Cannot create a new site via native node add menu items.
    Given the module "pinserver" is enabled
    And the module "os_pinserver_auth" is enabled
    And I am an anonymous user
    And anonymous users may "create department content"
    And anonymous users may "create personal content"
    And anonymous users may "create project content"
    When I visit <request-url>
    Then I should get a <code> HTTP response

  Examples:
    | request-url           | code |
    | "node/add/department" | 403  |
    | "node/add/personal"   | 403  |
    | "node/add/project"    | 403  |
