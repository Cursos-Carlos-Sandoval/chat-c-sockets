#pragma once
#ifndef _SERVER_H_
#define _SERVER_H_

#define MAX_CONNS 2
#define PORT 3535

int server_start_listen(int server_fd, int max_conns);

#endif // !_SERVER_H_
