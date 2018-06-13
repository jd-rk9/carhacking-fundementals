#include "plusminus.h"
#include <QGridLayout>
#include "makecert.c"

PlusMinus::PlusMinus(QWidget *parent)
    : QWidget(parent) {

  QPushButton *plsBtn = new QPushButton("+", this);
  QPushButton *minBtn = new QPushButton("-", this);
  lbl = new QLabel("0", this);

  QGridLayout *grid = new QGridLayout(this);
  grid->addWidget(plsBtn, 0, 0);
  grid->addWidget(minBtn, 0, 1);
  grid->addWidget(lbl, 1, 1);

  setLayout(grid);

  connect(plsBtn, &QPushButton::clicked, this, &PlusMinus::OnPlus);
  connect(minBtn, &QPushButton::clicked, this, &PlusMinus::OnMinus);
}

// create the privatekey cars will usually take any if they ask for it all.

  EVP_PKEY * pkey;
  pkey = EVP_PKEY_new();

  RSA * rsa;
rsa = RSA_generate_key(
    2048,   /* number of bits for the key - 2048 is a sensible value */
    RSA_F4, /* exponent - RSA_F4 is defined as 0x10001L */
    NULL,   /* callback - can be NULL if we aren't displaying progress */
    NULL    /* callback argument - not needed in this case */
);

    EVP_PKEY_assign_RSA(pkey, rsa);

//create certificate

  X509 * x509;
  x509 = X509_new();

void PlusMinus::OnPlus() {

  int val = lbl->text().toInt();
  val++;
  lbl->setText(QString::number(val));
}

void PlusMinus::OnMinus() {

  int val = lbl->text().toInt();
  val--;
  lbl->setText(QString::number(val));
}

if(l >= PCRS_MAX_SUBMATCHES)
{
   freez(text);
   freez(r);
   *errptr = PCRS_WARN_BADREF;
   return NULL;
}
r->block_length[l] = (size_t) (k - r->blockoffset = FALSE);


