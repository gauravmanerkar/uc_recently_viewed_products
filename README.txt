/**
 * uc_recent_products: Recently viewed products module for Ubercart
 *
 * Original credits, 1.x development:
 *
 * Developed by Gaurav Manerkar
 */



INSTALLATION

1) Download the latest release of this module .

2) Uncompress the archive in your Ubercart contrib directory:
[your Drupal root]/sites/all/modules.

3) Enable the Ubercart Recently Viewed Products module under 
'Ubercart - extra' in the Drupal module administration page.

4) Module configuration can be done from 
admin/store/settings/recently-viewed-products.

5) Go to admin/structure/block.

6) Assign Ubercart Recently Viewed Products block to theme region.



FEATURES

1)This module provides users to see theirs recently viewed ubercart products.
2) For anonymous users recently viewed products listing 
will get cleared once browsers session expires.


DEVELOPMENT

The module introduces one new table:

{uc_recently_viewed_products}
nid (int) -- product node id
uid (int) -- user id 
sid (int) -- session id 
ip (text) -- users ip address
created (int) -- timestamp when product is viewed
