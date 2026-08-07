#include <stdio.h>
#include <gmp.h>
#include <mpfr.h>

int main() {
    mpfr_prec_t bit = 3400; // ~1000 ondalık basamak hassasiyeti
    mpfr_t terim, toplam;

    mpfr_init2(terim, bit);
    mpfr_init2(toplam, bit);
    mpfr_set_ui(toplam, 0, MPFR_RNDN); // toplam = 0

    // Örnek: n = 0'dan 10'a kadar döngü
    for (unsigned long n = 0; n <= 10; n++) {
        // Pay: (-1)^n -> n çift ise +1.0, tek ise -1.0
        double pay = (n % 2 == 0) ? 1.0 : -1.0;

        // Bölme: terim = pay / (2n + 1)
        mpfr_set_d(terim, pay, MPFR_RNDN);
        mpfr_div_ui(terim, terim, 2 * n + 1, MPFR_RNDN);

        // Birikimli Toplama: toplam += terim
        mpfr_add(toplam, toplam, terim, MPFR_RNDN);
    }

    // 1000 basamak hassasiyetle ekrana bas
    printf("Birikimli Toplam (1000 basamak):\n");
    mpfr_printf("%.1000Rf\n", toplam);

    mpfr_clears(terim, toplam, NULL);
    mpfr_free_cache();
    return 0;
}
