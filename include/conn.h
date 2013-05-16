// This file is part of the "fyrehose" project
//   (c) 2011-2013 Paul Asmuth <paul@paulasmuth.com>
//
// Licensed under the MIT License (the "License"); you may not use this
// file except in compliance with the License. You may obtain a copy of
// the License at: http://opensource.org/licenses/MIT

#ifndef CONN_H
#define CONN_H

#include <sys/socket.h>
#include "http.h"
#include "worker.h"

typedef struct conn_s {
  int              sock;
  struct sockaddr* addr;
  socklen_t        addr_len;
  char*            buf;
  int              buf_len;
  int              buf_pos;
  http_req_t*      http_req;
  struct conn_s*   next;
  worker_t*        worker;
} conn_t;

conn_t* conn_init();
void conn_close();
void conn_read(conn_t* self);

#endif