/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010- Facebook, Inc. (http://www.facebook.com)         |
   | Copyright (c) 1997-2010 The PHP Group                                |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
*/

#ifndef __EXTPROFILE_IPC_H__
#define __EXTPROFILE_IPC_H__

// >>>>>> Generated by idl.php. Do NOT modify. <<<<<<

#include <runtime/ext/ext_ipc.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

inline int64 x_ftok(CStrRef pathname, CStrRef proj) {
  FUNCTION_INJECTION_BUILTIN(ftok);
  return f_ftok(pathname, proj);
}

inline Variant x_msg_get_queue(int64 key, int64 perms = 0666) {
  FUNCTION_INJECTION_BUILTIN(msg_get_queue);
  return f_msg_get_queue(key, perms);
}

inline bool x_msg_queue_exists(int64 key) {
  FUNCTION_INJECTION_BUILTIN(msg_queue_exists);
  return f_msg_queue_exists(key);
}

inline bool x_msg_send(CObjRef queue, int64 msgtype, CVarRef message, bool serialize = true, bool blocking = true, CVarRef errorcode = null) {
  FUNCTION_INJECTION_BUILTIN(msg_send);
  return f_msg_send(queue, msgtype, message, serialize, blocking, errorcode);
}

inline bool x_msg_receive(CObjRef queue, int64 desiredmsgtype, CVarRef msgtype, int64 maxsize, CVarRef message, bool unserialize = true, int64 flags = 0, CVarRef errorcode = null) {
  FUNCTION_INJECTION_BUILTIN(msg_receive);
  return f_msg_receive(queue, desiredmsgtype, msgtype, maxsize, message, unserialize, flags, errorcode);
}

inline bool x_msg_remove_queue(CObjRef queue) {
  FUNCTION_INJECTION_BUILTIN(msg_remove_queue);
  return f_msg_remove_queue(queue);
}

inline bool x_msg_set_queue(CObjRef queue, CArrRef data) {
  FUNCTION_INJECTION_BUILTIN(msg_set_queue);
  return f_msg_set_queue(queue, data);
}

inline Array x_msg_stat_queue(CObjRef queue) {
  FUNCTION_INJECTION_BUILTIN(msg_stat_queue);
  return f_msg_stat_queue(queue);
}

inline bool x_sem_acquire(CObjRef sem_identifier) {
  FUNCTION_INJECTION_BUILTIN(sem_acquire);
  return f_sem_acquire(sem_identifier);
}

inline Variant x_sem_get(int64 key, int64 max_acquire = 1, int64 perm = 0666, bool auto_release = true) {
  FUNCTION_INJECTION_BUILTIN(sem_get);
  return f_sem_get(key, max_acquire, perm, auto_release);
}

inline bool x_sem_release(CObjRef sem_identifier) {
  FUNCTION_INJECTION_BUILTIN(sem_release);
  return f_sem_release(sem_identifier);
}

inline bool x_sem_remove(CObjRef sem_identifier) {
  FUNCTION_INJECTION_BUILTIN(sem_remove);
  return f_sem_remove(sem_identifier);
}

inline Variant x_shm_attach(int64 shm_key, int64 shm_size = 10000, int64 shm_flag = 0666) {
  FUNCTION_INJECTION_BUILTIN(shm_attach);
  return f_shm_attach(shm_key, shm_size, shm_flag);
}

inline bool x_shm_detach(int64 shm_identifier) {
  FUNCTION_INJECTION_BUILTIN(shm_detach);
  return f_shm_detach(shm_identifier);
}

inline bool x_shm_remove(int64 shm_identifier) {
  FUNCTION_INJECTION_BUILTIN(shm_remove);
  return f_shm_remove(shm_identifier);
}

inline Variant x_shm_get_var(int64 shm_identifier, int64 variable_key) {
  FUNCTION_INJECTION_BUILTIN(shm_get_var);
  return f_shm_get_var(shm_identifier, variable_key);
}

inline bool x_shm_has_var(int64 shm_identifier, int64 variable_key) {
  FUNCTION_INJECTION_BUILTIN(shm_has_var);
  return f_shm_has_var(shm_identifier, variable_key);
}

inline bool x_shm_put_var(int64 shm_identifier, int64 variable_key, CVarRef variable) {
  FUNCTION_INJECTION_BUILTIN(shm_put_var);
  return f_shm_put_var(shm_identifier, variable_key, variable);
}

inline bool x_shm_remove_var(int64 shm_identifier, int64 variable_key) {
  FUNCTION_INJECTION_BUILTIN(shm_remove_var);
  return f_shm_remove_var(shm_identifier, variable_key);
}


///////////////////////////////////////////////////////////////////////////////
}

#endif // __EXTPROFILE_IPC_H__
