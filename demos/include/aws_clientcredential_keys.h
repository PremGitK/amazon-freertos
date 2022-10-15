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
"MIIDWTCCAkGgAwIBAgIUcmfF1PD5IP4pUJQswoGFCITXm3wwDQYJKoZIhvcNAQEL\n"\
"BQAwTTFLMEkGA1UECwxCQW1hem9uIFdlYiBTZXJ2aWNlcyBPPUFtYXpvbi5jb20g\n"\
"SW5jLiBMPVNlYXR0bGUgU1Q9V2FzaGluZ3RvbiBDPVVTMB4XDTIyMTAwMTA3NTY1\n"\
"NloXDTQ5MTIzMTIzNTk1OVowHjEcMBoGA1UEAwwTQVdTIElvVCBDZXJ0aWZpY2F0\n"\
"ZTCCASIwDQYJKoZIhvcNAQEBBQADggEPADCCAQoCggEBAMMHOoyw2XlX+JZOeTnG\n"\
"uImfL1XkLKSjCLM4cT7ZeMMBzMWl5n3gQNObR+05zVM65g9tUJZ96MId73Dnl+es\n"\
"rgzxS+EFuwfc4ZZqFyP8HdsoPfcKERZed3P2xfFVF/nXX8+7oGeqX786WZrjftqT\n"\
"rNm0TYafubjppJ/GJIt1bR+idetRP/0M/k/72JOP4hQQWqUmOGT37KIkdGE+Llyy\n"\
"XJJtqIe8+rIsyvDGp7Q/bz/pMJYnezxYzJLuiNnXXVvLN0RmIzUNRRarWPimYuh3\n"\
"vwtvDy30h/iEEf4wtjk9vjmrIehueRidSAjDHjQ88sVnEZLgBgeyUbPbmNCVJZHn\n"\
"flsCAwEAAaNgMF4wHwYDVR0jBBgwFoAU0JPiKqzMGJqQVBWZT1ubfA5WLg4wHQYD\n"\
"VR0OBBYEFPtTUr/npPbbiPYRo1+FrVr4kvvYMAwGA1UdEwEB/wQCMAAwDgYDVR0P\n"\
"AQH/BAQDAgeAMA0GCSqGSIb3DQEBCwUAA4IBAQAJoQgb5DCo2Q4S3+gTHyEJaU5k\n"\
"wVmgK34Chs2YZt+6vbxt/ZUIgZACZmGqLTZI1PttgVPjH0tk5RbMt6d5xDt67c7g\n"\
"0Z3HlkR5h5qrlAm6/akr7LLXZ4oVoq91jVr6lp/0RTiQiTv5zyjHhM0Z7phUv0JP\n"\
"WJP0jqkoKzbLMhFsWUQ6mrfc1T+2LhHplMO7Tib0ibwHvc/a9Lr3L5DZUvti6o2r\n"\
"F45sYDWIfNpyoluO16wdNTLIFbFGKLTv2JEZRVdIqLjRWEvoTi3qiOTWTaaMR4FY\n"\
"2IlefZ8XRY57Lh1sMAJ0OF/tSEmFVwSK9Kc+uRHJuAKEW28GdHbL/RqtvVDa\n"\
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
"MIIEogIBAAKCAQEAwwc6jLDZeVf4lk55Oca4iZ8vVeQspKMIszhxPtl4wwHMxaXm\n"\
"feBA05tH7TnNUzrmD21Qln3owh3vcOeX56yuDPFL4QW7B9zhlmoXI/wd2yg99woR\n"\
"Fl53c/bF8VUX+ddfz7ugZ6pfvzpZmuN+2pOs2bRNhp+5uOmkn8Yki3VtH6J161E/\n"\
"/Qz+T/vYk4/iFBBapSY4ZPfsoiR0YT4uXLJckm2oh7z6sizK8MantD9vP+kwlid7\n"\
"PFjMku6I2dddW8s3RGYjNQ1FFqtY+KZi6He/C28PLfSH+IQR/jC2OT2+Oash6G55\n"\
"GJ1ICMMeNDzyxWcRkuAGB7JRs9uY0JUlked+WwIDAQABAoIBAFVoKP/LwrEdEUPh\n"\
"gb0HhXDfQT9/+PzwWLMDmLRJUFU1yJMVn+an+juw2MLOeVhlhrJi0NPWt8OqkF0F\n"\
"TsSqHl6UnQIiHFHJLRFNzGx50ClVai1xPyJopC8odm7FMQa8hrzWEdzUA7Iev3bR\n"\
"AZB+80czam/2KsMLrog5oW9hMTSUkJ+zQ8YaEsHR6KUK+NeKn1Mdbl+n6Q1HdRK1\n"\
"sjBBn3DsDc4aw9ldbM2A5mF9DBZKpB28f+aCfLQvP1ziPBNSbzP/QaR0+ugLd2J7\n"\
"/Xwbpxe7TRGcG6ehb4/N3KZtcXizu9kb4pMgtYOO7AQ9FaE/ba73TLvEAk+by25E\n"\
"DwXhIiECgYEA7x9U3/KQtqKO7fG7fBCc9E+zs1fBwOA6gIb7drVcmLjf5qq+4yLW\n"\
"bGFM+sL0Xq3+bO9mt8KYbSz6H9bRNQUYoAGphoJcYdY1lvI0AITy2mOlK9W1Q/K6\n"\
"epPUVJpMaYa2HIFCXdRpcx6nA5t2BTqqwZRoc20bdEFSmFZVOwTyiz8CgYEA0Msq\n"\
"jI6Ew5fVXSwpjGr2LM2SwrtOkcEf19xOKZisJc2IxgS7/wwGkiB2G9AdzyPJNECY\n"\
"5SFRBi0CweNctRSGijdMIsiuid2bVV0nR4Vwq4nCx90JF9FvnXhMf/tDLi6KOkW+\n"\
"N3ZEYZidMicXsIJgjfKl/oriPLcFWnFVmQqeUeUCgYBEu8bT0I+UT8mxz6hKkyPq\n"\
"ffZzeKgy3sEyLJqflqYVKB8D2NShyWPFJ3rPIbbIeE8H1RC7hW33A9Spzj+4c8yO\n"\
"QawPA+22GbKxvtD/zTdZWwchQH6oF19O2KtR3kBUnOo/60++VM4yzv7G5KrZ+fEX\n"\
"T6dudlBL7HLnYvmAy31EVQKBgEXYIKSiLDFNwjcHxeJOCYmVPwnbJH5Hb0KDVLY/\n"\
"dx6yMZWkEctQl4YcS8YkCUS4gN702PCVA4igV/LJ/sIoWpUzyEk+fnxp4ENfBPu8\n"\
"3KLVU44OF7ObAM5ZZqXNRHzXXq/9kpL1Agzvw236e8c05d22FOcgSGvtAWJu1SZ7\n"\
"0dgtAoGARytYtE6QXDbtz1tFOL6PSCYwKStXR4dCnWrYnNPE/t9gaT3tsIhtsxkV\n"\
"P8ImxrC/pCzJvbT80isnrXD/W0VH+etKQ/GU0/c8ay9LFR7R9325sYElq3HaByXZ\n"\
"hfvdSdSSoRFUmmfmQHH8KNWnAfdwVAJAJrdQzOhpbfGU4Z8cU8A=\n"\
"-----END RSA PRIVATE KEY-----"

/*
 * PEM-encoded Just-in-Time Registration (JITR) certificate (optional).
 *
 * If used, must include the PEM header and footer:
 * "-----BEGIN CERTIFICATE-----\n"\
 * "...base64 data...\n"\
 * "-----END CERTIFICATE-----"
 */
#define keyJITR_DEVICE_CERTIFICATE_AUTHORITY_PEM  ""


#endif /* AWS_CLIENT_CREDENTIAL_KEYS_H */
