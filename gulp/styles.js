
var gulp = require('gulp');
var sass = require('gulp-sass');
var autoprefixer = require('gulp-autoprefixer');
var path = require('path');
var del = require('del');
var glob = require('node-sass-globbing');
var assetFunctions = require('node-sass-asset-functions');

var config = require('./config');
var assets = config.theme.path + '/assets';

gulp.task('styles', ['clean:styles'], function () {
  return gulp.src(assets + '/sass/source/**/*')
    .pipe(sass({
      functions: assetFunctions({
        images_path: assets + '/images',
        http_images_path: '/' + path.relative('build', assets) + '/images'
      }),
      includePaths: [
        assets + '/sass/library',
        assets + '/sass/partials'
      ],
      importer: glob
    })
    .on('error', sass.logError))
    .pipe(autoprefixer({
      browsers: ['last 2 versions', 'ie 9', 'ie 10', 'ie 11'],
      cascade: false
    }))
    .pipe(gulp.dest(config.theme.path + '/css'));
});

gulp.task('clean:styles', function () {
  return del([assets + '/css']);
});
