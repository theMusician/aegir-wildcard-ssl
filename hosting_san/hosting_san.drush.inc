<?php
/**
* Implementation of drush_hook_pre_hosting_task()
* Send the site's SAN attribute to the backend for processing.
*/
function drush_hosting_san_pre_hosting_task() {
  $task =& drush_get_context('HOSTING_TASK');
  if ($task->ref->type == 'site' && ($task->task_type == 'install' || $task->task_type == 'verify')) {
    $task->options['san'] = $task->ref->san;
  }
}