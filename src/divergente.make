core = 7.x
api = 2


defaults[projects][subdir] = contrib

; =====================
; Kraftwagen
; =====================

projects[kw_manifests][type] = module
projects[kw_manifests][download][type] = git
projects[kw_manifests][download][url] = git://github.com/kraftwagen/kw-manifests.git
projects[kw_manifests][subdir] = kraftwagen

projects[kw_itemnames][type] = module
projects[kw_itemnames][download][type] = git
projects[kw_itemnames][download][url] = git://github.com/kraftwagen/kw-itemnames.git
projects[kw_itemnames][subdir] = kraftwagen


; =====================
; Configuration
; =====================

projects[features][version] = 2.8
projects[strongarm][version] = 2.0
projects[configuration][version] = 2.x-dev
projects[configuration][patch][] = https://www.drupal.org/files/issues/drush-left-sync-2460397-6.patch
projects[xautoload][version] = 5.6


; =====================
; Miscellaneous
; =====================

projects[ctools][version] = 1.3
projects[token][version] = 1.5
projects[libraries][version] = 2.2
projects[views][version] = 3.13


; =====================
; Content
; =====================

projects[entity][version] = 1.2
projects[entityreference][version] = 1.1
projects[date][version] = 2.9
projects[link][version] = 1.4


; =====================
; SEO & Metadata
; =====================

projects[pathauto][version] = 1.2
projects[transliteration][version] = 3.1


; =====================
; Administrative
; =====================

projects[admin_menu][version] = 3.0-rc5
projects[admin_menu][patch][] = https://www.drupal.org/files/issues/admin_menu-font-size-option-841516-10.patch
projects[adminimal_theme][version] = 1.24


; =====================
; Development
; =====================

projects[devel][version] = 1.5
projects[devel_debug_log][version] = 1.2
projects[search_krumo][version] = 1.6


; =====================
; Libraries
; =====================

libraries[OpenGraph][download][type] = git
libraries[OpenGraph][download][url] = https://github.com/scottmac/opengraph.git
libraries[OpenGraph][download][revision] = 062c75dd8265bbe57261a4154ead54fd782d4035
