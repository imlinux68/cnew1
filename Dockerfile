FROM gcc:latest as builder

WORKDIR /app

COPY 1.c .

RUN gcc -static 1.c -o first.exe

FROM scratch

COPY --from=builder /app/first.exe /first.exe

CMD ["/first.exe"]
