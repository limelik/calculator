FROM gcc:latest	

WORKDIR /app

COPY main.cpp .

RUN g++ -o calculator main.cpp

CMD ["./calculator"]