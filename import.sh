#!/bin/bash

cd www
drush sql-drop -y
`drush sql-connect` < $1
drush updb -y
drush vrd -y --uri=$2
drush dl acquia_connector
drush en dblog -y
drush en devel -y
drush en os_apache_solr -y
drush uli --uri=$2



