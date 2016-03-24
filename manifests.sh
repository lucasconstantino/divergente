cd ~/divergente/build
drush kw-m
if [ -d "profiles/divergente/themes/taller/assets/sass/" ]; then
  cd profiles/divergente/themes/taller/assets/sass/
  bundle install
  bundle exec compass compile
fi
cd ~/divergente/build
if [ -d "profiles/divergente/themes/divergente/assets/sass/" ]; then
  cd profiles/divergente/themes/divergente/assets/sass/
  bundle install
  bundle exec compass compile
fi
cd ~/divergente/build
if [ -d "profiles/divergente/themes/ember" ]; then
  cd profiles/divergente/themes/ember
  bundle install
  bundle exec compass compile
fi
