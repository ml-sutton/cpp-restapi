#ifndef CPP_RESTAPI_TCP_SERVER_H
#define CPP_RESTAPI_TCP_SERVER_H
class TCPServer
{
  public:
  TCPServer();
  // C++ rule of 3. If I need a destructor I need a copy constructor and copy assignment operator
  TCPServer(const TCPServer& inServer);
  ~TCPServer();
  TCPServer& operator=(const TCPServer& inServer);
};
#endif
