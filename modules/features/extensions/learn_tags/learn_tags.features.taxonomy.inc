<?php
/**
 * @file
 * learn_tags.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function learn_tags_taxonomy_default_vocabularies() {
  return array(
    'learn_tags' => array(
      'name' => 'Tags',
      'machine_name' => 'learn_tags',
      'description' => 'Tags to describe the content',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
      'language' => 'und',
      'i18n_mode' => '1',
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
