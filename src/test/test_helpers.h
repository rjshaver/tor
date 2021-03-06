/* Copyright (c) 2014-2016, The Tor Project, Inc. */
/* See LICENSE for licensing information */

#ifndef TOR_TEST_HELPERS_H
#define TOR_TEST_HELPERS_H

const char *get_yesterday_date_str(void);

/* Number of descriptors contained in test_descriptors.txt. */
#define HELPER_NUMBER_OF_DESCRIPTORS 8

void helper_setup_fake_routerlist(void);

#define GET(path) "GET " path " HTTP/1.0\r\n\r\n"
void connection_write_to_buf_mock(const char *string, size_t len,
                                  connection_t *conn, int zlib);

extern const char TEST_DESCRIPTORS[];

#endif

