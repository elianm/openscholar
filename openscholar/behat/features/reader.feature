Feature:
  Testing the OS reader functionallity.

  @api
  Scenario: Test the Reader tab
    Given I visit "john"
    When I click "Reader"
    Then I should see "Engadget rss"

  @api @wip
  Scenario: Test the OS reader feed importer.
    Given I am logging in as "admin"
    And I import feed items for "john"
    When I visit "john/cp/content/import/news"
    And I should see "John feed importer"
    And I import the feed item "JFK was murdered"
    Then I should see the feed item "JFK was murdered" was imported
    And I should see "JFK was murdered"

  @api @wip
  Scenario: Verify the anonymous user is being redirected to the feed item
  source page.
    Given I visit "john/news"
    When I click "JFK was murdered"
    Then I should see "Assassination of John F. Kennedy"

  @api @wip
  Scenario: Feed items are displayed for each site
    Given I am logging in as "admin"
    And I import feed items for "obama"
    When I visit "obama/cp/content/import/news"
    And I should see "Obama feed importer"
    And I should not see "John feed importer"
    And I should not see "JFK was murdered"
    And I import the feed item "Four more years is the most re-tweeted tweet"
    Then I should see the feed item "Four more years is the most re-tweeted tweet" was imported
    And I should see "Four more years is the most re-tweeted tweet"

  @api @wip
  Scenario: Verify images in feed item description are imported as images.
    Given I am logging in as "admin"
    And I import feed items for "john"
    And I visit "john/cp/content/import/news"
    When I import the feed item "JFK was murdered"
    And I should see the feed item "JFK was murdered" was imported
    And I display watchdog
    Then I should see the news photo "druplicon.small__"

  @api @wip
  Scenario: Test the Contains filter on OS feed import page.
    Given I am logging in as "admin"
      And I visit "john/cp/content/import/news?feed_by_text=president"
      And I should see "JFK was murdered"
     When I visit "john/cp/content/import/news?feed_by_text=pancakes"
     Then I should not see "JFK was murdered"

  @api @wip
  Scenario: Test the Status filter on OS feed import page.
    Given I am logging in as "admin"
     When I visit "john/cp/content/import/news?feed_is_imported=All"
     Then I should see "JFK was murdered"

  @api @wip
  Scenario: Test the Importer filter on OS feed import page.
    Given I am logging in as "admin"
      And I visit "john/cp/content/import/news"
     When I click "John news importer"
     Then I should see "JFK was murdered"

  @api @wip 
  Scenario: Verify the imported news date is the original feed item date.
    Given I am logging in as "admin"
    And I import feed items for "john"
    And I visit "john/cp/content/import/news"
    And I import the feed item "Lee Harvey Oswald"
    When I visit "john/news"
    And I click "Lee Harvey Oswald"
    Then I should see "November 22, 1963"
