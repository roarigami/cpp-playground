#include <boost/beast/core.hpp>
#include <boost/beast/websocket.hpp>
#include <iostream>
#include <string>
#include <thread>

using tcp = boost::asio::ip::tcp;

int main() {
        auto const address = boost::asio::ip::make_address("127.0.0.1");
        auto const port = static_cast<unsigned short>(std::atoi("8083"));

        boost::asio::io_context ioc{1};

        tcp::acceptor acceptor{ioc, {addres, port}};

        while(1) {
              tcp::socket socket{ioc};
              acceptor.accept(socket);
        }


        return 0;
}
