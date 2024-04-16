// join function
void clientJoin( ChatNodeList *clientList, Message* messageObj )
{
  // grab client from messageObj

  // add client to clientList
    // function: addChatNodeToList

  // change msgtype from JOIN > JOINED

  // send join message to all clients
    // function: globalJoining()
}

// leave function
void clientLeave( ChatNodeList *clientList, Message* messageObj )
{
  // grab client from messageObj

  // if remove chat node
    // function: removeNodeFromList

    // change msgtype from LEAVE > LEAVING

    // send
      // function: globalLeaving()

  // otherwise, do nothing
}

// note function
void clientNote( ChatNodeList *clientList, Message* messageObj )
{
  // declare variables

  // grab client from messageObj

  // loop through clientList

    // if the current client != clientNode
    // function: compareChatNodes()

      // send message to everyone
        // function: writeMessageToSocket( note )
}

// shutdown function
void clientShutdown( ChatNodeList *clientList, Message* messageObj )
{
  // declare variables

  // grab client from messageObj

  // loop through clientList

    // check if currentNode == clientNode

      // Send client shutdown message
        // function: writeMessageToSocket

      // remove chat node
        // function: removeNodeFromList

    // otherwise

      // send message to everyone that client left

        // function: globalLeaving()

}

void get_ip_address(const char *string, char *ip_string)
{
  // unsure if needed
}

// joining function
void globalJoining( ChatNodeList *clientList, Message* messageObj )
{
    // "(!) [USER] has joined."

  // iterate through clientList

    // check if currentNode != clientNode

      // send message to everyone
        // function: writeMessageToSocket
}

// leaving function
void globalLeaving( ChatNodeList *clientList, Message* messageObj )
{
  // "(!) [USER] has left."

  // iterate through clientList

    // check if currentNode != clientNode

      // send message to everyone
        // function: writeMessageToSocket( messageObj )

}

void globalShutdown( ChatNodeList *clientList, Message* messageObj )
{
  // "(!) Shutting Down..."

  // iterate through clientList

    // send message to everyone
      // function: writeMessageToSocket

  // free linked list
    // function: clearList
}

void* handle_client( void* args )
{
  // initialize variables
  // struct ThreadArgs *threadArgs = (struct ThreadArgs *)args;

  // grab client socket
  // grab clientList

  // read entire message from socket, returns pointer to new msg struct
    // function: readMessageFromSocket( )
  // messageObj = readMessageFromSocket( )

  // process depending on MessageType

    //  JOIN

      // function: clientJoin()

    //  LEAVE

      // function: clientLeave()

    //  SHUTDOWN

      // function: clientShutdown()

    //  SHUTDOWN_ALL

      // function: globalShutdown()

    //  NOTE

      // function: clientNote()

    //  JOINING

      // function: globalJoining()

    //  LEAVING

      // function: globalLeaving()

}
