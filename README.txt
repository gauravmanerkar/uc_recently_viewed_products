/**
 * uc_recent_products: Recently viewed products module for Ubercart
 *
 *
 * Original credits, 1.x development:
 *
 * Developed by Gaurav Manerkar
 */



1. INSTALLATION

Download the latest release of this module 

Uncompress the archive in your Ubercart contrib directory:
[your Drupal root]/sites/all/modules/ubercart/contrib

Enable the Ubercart Recently Viewed Products module under 'Ubercart - extra' in the
Drupal module administration page.

Module configuration can be done from : admin/store/settings/recently-viewed-products

Go to admin/structure/block

Assign Ubercart Recently Viewed Products block to theme region


2. FEATURES

This module provides users to see theirs recently viewes ubercart products.
For anonymous users recently viewed products listing will get cleared once browsers session expires.


3. DEVELOPMENT

The module introduces one new table:

{uc_recently_viewed_products}
nid (int) -- product node id
uid (int) -- user id 
sid (int) -- session id 
ip (text) -- users ip address
created (int) -- timestamp when product is viewed




