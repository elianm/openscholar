#!/bin/bash

cd www
drush sql-drop -y
`drush sql-connect` < $1
drush updb -y
drush cc all
drush vrd -y --uri=$2
drush dl acquia_connector -y
drush en acquia_search -y
drush en dblog -y
drush en devel -y
drush en os_search_solr -y

# Index Solr.
drush solr-mark-all; drush solr-index

# Open site as admin.
drush uli --uri=$2



