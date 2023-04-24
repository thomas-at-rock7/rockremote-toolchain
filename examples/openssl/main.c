#include <stdio.h>
#include <openssl/crypto.h>
#include <openssl/evp.h>

int main (int argc, char *argv[])
{
    OSSL_LIB_CTX * ctx = NULL;
    printf ("Openssl Version: %s\n", OpenSSL_version(OPENSSL_FULL_VERSION_STRING));
    printf ("%s\n", OpenSSL_version(OPENSSL_MODULES_DIR));
    printf ("%s\n", OpenSSL_version(OPENSSL_ENGINES_DIR));

    ctx = OSSL_LIB_CTX_new();
    if (ctx != NULL)
    {
        if (EVP_default_properties_enable_fips(ctx, 1) != 1)
        {
            printf ("Failed to enable fips\n");
        }

        printf ("FIPS is %s\n", EVP_default_properties_is_fips_enabled(ctx) ? "enabled" : "disabled");

        // Then fetching algorithms with this ctx should use fips compliant ones.

        OSSL_LIB_CTX_free(ctx);
    }
    return 0;
}
