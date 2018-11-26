#ifndef AWS_CLIENT_CREDENTIAL_KEYS_H
#define AWS_CLIENT_CREDENTIAL_KEYS_H

#include <stdint.h>

/*
 * PEM-encoded client certificate.
 *
 * Must include the PEM header and footer:
 * "-----BEGIN CERTIFICATE-----\n"\
 * "...base64 data...\n"\
 * "-----END CERTIFICATE-----"
 */
#define keyCLIENT_CERTIFICATE_PEM \
"-----BEGIN CERTIFICATE-----\n"\
"MIIDWjCCAkKgAwIBAgIVANiySqAIIgnP3eSmhvzkIVrG2SXRMA0GCSqGSIb3DQEB\n"\
"CwUAME0xSzBJBgNVBAsMQkFtYXpvbiBXZWIgU2VydmljZXMgTz1BbWF6b24uY29t\n"\
"IEluYy4gTD1TZWF0dGxlIFNUPVdhc2hpbmd0b24gQz1VUzAeFw0xODExMTYxMTU0\n"\
"MjdaFw00OTEyMzEyMzU5NTlaMB4xHDAaBgNVBAMME0FXUyBJb1QgQ2VydGlmaWNh\n"\
"dGUwggEiMA0GCSqGSIb3DQEBAQUAA4IBDwAwggEKAoIBAQDHKHZBpAZQsP+tSO56\n"\
"Z64+ikNYPXF7EgKWRTu7oAb65frmFy8odI3EgQUd2za7ZNh0+h65qKol/p1yie91\n"\
"KeYQSLFGQhMB1DTbvsXVORTf8MS/cJ4Dh7O1q4ZazrM0T9WVv40jtOX7QaiIeJxW\n"\
"EKtOwu6gQC5CP88ChT3NHUSCw58B8qC4VLjTLevSWwTflCNRLPrZqxzzp5i6kWWe\n"\
"0g4OvYFZP/WgJh5yAV+qUEsW/5PRe6/jOF3VAnaGGXNWjM7IyPG3a005eUeg4kni\n"\
"ykuhNW4ftj+gLlNCnAwQt0O+BkKDBk4N6tXR+JeCny1vx/9IrzD+lk71CGM9alKW\n"\
"yE9hAgMBAAGjYDBeMB8GA1UdIwQYMBaAFFB9o/CVqw3SNaZJB783JijMPBhjMB0G\n"\
"A1UdDgQWBBTWa0neuvqjUMSFSwfXbACTzUpjtjAMBgNVHRMBAf8EAjAAMA4GA1Ud\n"\
"DwEB/wQEAwIHgDANBgkqhkiG9w0BAQsFAAOCAQEAJ9Mp5GePtbmqjeUhw69whN79\n"\
"YJ/pk/rVpUH5bzidF+7tMy50OdqNFs87UwJcFi60C2fQCqA57KDKuAnPYyQ467ei\n"\
"kIjr2Hn0AW94D3tR6OuHU00YJNA/nc0+WRvCATI4c7wrQ1LlnerzhsEavvvd8X+j\n"\
"1ee6C/lDu+8BZNmlzMbyBeS4Qej59YDBtJWdFdHa5mOsH1BoQhZ6EsPjhvqvv101\n"\
"X70bs0Mfv16+hqCFjPsncg8ysCjxazEVzxntCjJNUFnDDNJOWeEDZwblRgmNLIYM\n"\
"y4TazdCD4FRRONvoY0o/+fWZL/hOFVyH9SUqWRy3azLtBgcOqyVdOi+F+BGmTw==\n"\
"-----END CERTIFICATE-----"

/*
 * PEM-encoded client private key.
 *
 * Must include the PEM header and footer:
 * "-----BEGIN RSA PRIVATE KEY-----\n"\
 * "...base64 data...\n"\
 * "-----END RSA PRIVATE KEY-----"
 */
#define keyCLIENT_PRIVATE_KEY_PEM \
"-----BEGIN RSA PRIVATE KEY-----\n"\
"MIIEowIBAAKCAQEAxyh2QaQGULD/rUjuemeuPopDWD1xexIClkU7u6AG+uX65hcv\n"\
"KHSNxIEFHds2u2TYdPoeuaiqJf6dconvdSnmEEixRkITAdQ0277F1TkU3/DEv3Ce\n"\
"A4eztauGWs6zNE/Vlb+NI7Tl+0GoiHicVhCrTsLuoEAuQj/PAoU9zR1EgsOfAfKg\n"\
"uFS40y3r0lsE35QjUSz62asc86eYupFlntIODr2BWT/1oCYecgFfqlBLFv+T0Xuv\n"\
"4zhd1QJ2hhlzVozOyMjxt2tNOXlHoOJJ4spLoTVuH7Y/oC5TQpwMELdDvgZCgwZO\n"\
"DerV0fiXgp8tb8f/SK8w/pZO9QhjPWpSlshPYQIDAQABAoIBACS8oPvAvu15iOA1\n"\
"GNB5eZnNtVh8lQdHrjR79uXIQiFb9Okmk6tZvKDnz8LPIgx1MLx7OtmydBhoHDD5\n"\
"orMxFGAimJjGLW1j8JAsY5/OVLxuVEygAHXUPWEgj7sGb+YRZ+uklutkPhwX43ex\n"\
"D92MW50+tffXfvD3hj8HxvukD3QzQCVJVdvmZH7CNwGw6Y38QuQwfTNTj4NATMt2\n"\
"nuWgelBKxORgv+si29v1L/hsX38QKVDHu+VNakpofinf7ywfwtMO4ikk7N7Dgbve\n"\
"ilU1KkZ9dv2D4dFk8ta3g12bz+1MTrlxm2uhsA/WwZj/zYJBnz7ZnDoW4KRUkvpG\n"\
"rplH8/UCgYEA7Smh6wmCDWS+c9D/LG9FgqtREorhQEzbZF9TQ8ZyT422pZ3PRiHF\n"\
"rEsrTdh3b9OWnnn5zzsimmmsm+mCHVi3EjEzNkZKYHG61lREy9L4dh52+EGTRfnZ\n"\
"V85dKHMjDe+KPQTdZNV1j/xFmT6/yIsl4BkcrsxkIoOCHtSpc8OWj8sCgYEA1voP\n"\
"YLf8p2IuNV2VSp+TlIEcMLwKv9sV+1ACrsoNB+fmPjLhyB/EDygQPgtFFxO6b8jH\n"\
"Ny6cftVDgNEFg9ut0gwqnjJnFOULPQc8ZRmtYSIZ2NiXVO9Pc0bLPmVJ5CtxfxIy\n"\
"NdTM3Ua99ArLSX1f/7U4BU4E98t6Cr/WY1454AMCgYAIwPekCEbPnb9V4Qn6JuVG\n"\
"7HHioFOuHugeLVKSdtmzTATI2ilTal20fVXM2seVzhaKJPBukL03O91OJ/FQify/\n"\
"5CcCwtdt9eSykouzhkb7fSZhBXKdK5q1Hf3cR1us4QGWPP67ARIEzYf4HxPPICu2\n"\
"uNaRMSQlDfuYjbrvdfGxvwKBgQC6Kp76kRp5EasWh85raznwlsaE5bMhZmbo1ecc\n"\
"2tjiCc73+jRQjEHLJlS6hiP00h7YAzWR8gmQRLtKaLiv8aPbjLGzgc6G57sNxKBm\n"\
"pQ/iWBeuFBMpeHyDRcFobWrJ711AP8+/kmM/FK4XEuns4GgsFxFGdsQSmuE7Qdo0\n"\
"/zp7ZQKBgCccvfsnBfAjIgWrXVhK9EVZBoTbk8gTYHvsk9y/a3EYSHLm/hkHdfbe\n"\
"lQBQS51KrKJJWydpBTDOUqlbckSM29StNpsS7XggcOsyQWRIz4bDwoboi/AvFlZK\n"\
"AjayMXWBIkBDna7zUYLMyjOaJaWzQ7thXs9HtltnsxOcvaLL2lKH\n"\
"-----END RSA PRIVATE KEY-----"

/*
 * PEM-encoded Just-in-Time Registration (JITR) certificate (optional).
 *
 * If used, must include the PEM header and footer:
 * "-----BEGIN CERTIFICATE-----\n"\
 * "...base64 data...\n"\
 * "-----END CERTIFICATE-----"
 */
#define keyJITR_DEVICE_CERTIFICATE_AUTHORITY_PEM  NULL

/* The constants above are set to const char * pointers defined in aws_dev_mode_key_provisioning.c,
 * and externed here for use in C files.  NOTE!  THIS IS DONE FOR CONVENIENCE
 * DURING AN EVALUATION PHASE AND IS NOT GOOD PRACTICE FOR PRODUCTION SYSTEMS
 * WHICH MUST STORE KEYS SECURELY. */
extern const char clientcredentialCLIENT_CERTIFICATE_PEM[];
extern const char* clientcredentialJITR_DEVICE_CERTIFICATE_AUTHORITY_PEM;
extern const char clientcredentialCLIENT_PRIVATE_KEY_PEM[];
extern const uint32_t clientcredentialCLIENT_CERTIFICATE_LENGTH;
extern const uint32_t clientcredentialCLIENT_PRIVATE_KEY_LENGTH;

#endif /* AWS_CLIENT_CREDENTIAL_KEYS_H */
