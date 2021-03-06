/**
 *  @file
 *
 *  @brief Scheduler Priority Enqueue
 *  @ingroup ScoreScheduler
 */

/*
 *  COPYRIGHT (c) 2011.
 *  On-Line Applications Research Corporation (OAR).
 *
 *  The license and distribution terms for this file may be
 *  found in the file LICENSE in this distribution or at
 *  http://www.rtems.com/license/LICENSE.
 */

#if HAVE_CONFIG_H
#include "config.h"
#endif

#include <rtems/system.h>
#include <rtems/config.h>
#include <rtems/score/scheduler.h>
#include <rtems/score/schedulerpriority.h>

void _Scheduler_priority_Enqueue(
  Thread_Control      *the_thread
)
{
   _Scheduler_priority_Ready_queue_enqueue( the_thread );
}
