#if ZMQ_VERSION_MAJOR != 4

#error "You need ZeroMQ version 4 to build this"

#endif

#if ZMQ_VERSION_MINOR < 1

#define ZMQ_CONNECT_RID -1
#define ZMQ_GSSAPI -1
#define ZMQ_GSSAPI_PLAINTEXT -1
#define ZMQ_GSSAPI_PRINCIPAL -1
#define ZMQ_GSSAPI_SERVER -1
#define ZMQ_GSSAPI_SERVICE_PRINCIPAL -1
#define ZMQ_HANDSHAKE_IVL -1
#define ZMQ_IPC_FILTER_GID -1
#define ZMQ_IPC_FILTER_PID -1
#define ZMQ_IPC_FILTER_UID -1
#define ZMQ_ROUTER_HANDOVER -1
#define ZMQ_SOCKS_PROXY -1
#define ZMQ_THREAD_PRIORITY -1
#define ZMQ_THREAD_SCHED_POLICY -1
#define ZMQ_TOS -1
#define ZMQ_XPUB_NODROP -1

#endif

#if ZMQ_VERSION_MINOR < 2

#define ZMQ_MAX_MSGSZ -1

#define ZMQ_BLOCKY -1
#define ZMQ_XPUB_MANUAL -1
#define ZMQ_XPUB_WELCOME_MSG -1
#define ZMQ_STREAM_NOTIFY -1
#define ZMQ_INVERT_MATCHING -1
#define ZMQ_HEARTBEAT_IVL -1
#define ZMQ_HEARTBEAT_TTL -1
#define ZMQ_HEARTBEAT_TIMEOUT -1
#define ZMQ_XPUB_VERBOSER -1
#define ZMQ_CONNECT_TIMEOUT -1
#define ZMQ_TCP_MAXRT -1
#define ZMQ_THREAD_SAFE -1
#define ZMQ_MULTICAST_MAXTPDU -1
#define ZMQ_VMCI_BUFFER_SIZE -1
#define ZMQ_VMCI_BUFFER_MIN_SIZE -1
#define ZMQ_VMCI_BUFFER_MAX_SIZE -1
#define ZMQ_VMCI_CONNECT_TIMEOUT -1
#define ZMQ_USE_FD -1

#define ZMQ_GROUP_MAX_LENGTH -1

#define ZMQ_POLLPRI -1

#endif
