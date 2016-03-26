var gulp = require('gulp');

gulp.task('watch:styles', ['styles'], function () {
  gulp.watch('src/themes/natura/assets/sass/**/*', ['styles']);
});

gulp.task('watch', ['watch:styles']);
