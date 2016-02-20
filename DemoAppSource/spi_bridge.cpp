#include <stdio.h>
#include <stdlib.h>
#include <sys/ioctl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <termios.h>
#include <unistd.h>
#include <string>
#include <cstring>
#include "spi_bridge.h"

using namespace std;

SPI_Bridge::SPI_Bridge(string fileName) {
	this->fileName = fileName;
}
int SPI_Bridge::initialize() {
	fd = open(fileName.c_str(), O_RDWR | O_NOCTTY | O_NDELAY);
	if(!(fd < 0))
	{
		bzero(&options, sizeof(options));
		options.c_cflag = B115200 | CS8 | CREAD | CLOCAL;
		options.c_iflag = 0;
		options.c_oflag = 0; 
		options.c_lflag = 0;
		tcflush(fd, TCIFLUSH);
		tcsetattr(fd, TCSANOW, &options);
		return 0;
	}
	return -4;
}
int SPI_Bridge::sendMessage(char *buffer, int numberOfBytes) {
	int count = write(fd, buffer, numberOfBytes);
	if(count != numberOfBytes) 
	{
		return -1;
	}
	return 0;
}
int SPI_Bridge::receiveMessage(char *buffer, int numberOfBytes) {
	int count = 0;
	if((count = read(fd, (void *) &buffer[0], numberOfBytes)) < 0) {
	}
	else if(count == 0){
	}
	else {
	}
	return count;
}
void SPI_Bridge::flush() {
	tcflush(fd, TCIFLUSH);
}
int SPI_Bridge::release() {
	int ret = close(fd);
	fd = 0;
	return ret;
}
