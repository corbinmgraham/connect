#ifndef _GENERATE_H_
#define _GENERATE_H_

typedef struct {
    char *dat;
    char *salt;
} enc_t;

typedef struct {
    char *ip;
    int port;
} connect_t;

enc_t gen_enc(connect_t data);
connect_t gen_dec(enc_t data);

#endif