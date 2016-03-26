
var gulp = require('gulp');
var sass = require('gulp-sass');
var autoprefixer = require('gulp-autoprefixer');
var config = require('./config');

gulp.task('styles', function () {
  return gulp.src(config.theme.path + '/assets/sass/source/**/*')
    .pipe(sass({
      includePaths: [
        config.theme.path + '/assets/sass/library',
        config.theme.path + '/assets/sass/partials'
      ]
    }).on('error', sass.logError))
    .pipe(autoprefixer({
      browsers: ['last 2 versions', 'ie 9', 'ie 10', 'ie 11'],
      cascade: false
    }))
    .pipe(gulp.dest(config.theme.path + '/assets/css'));
});
