#include "ledger_nft_plugin.h"

// Function: mint
// Selector: 0xa0712d68
static const uint8_t MINT_SELECTOR[SELECTOR_SIZE] = {0xa0, 0x71, 0x2d, 0x68};

// Function: preSaleMint
// Selector: 0x827481ea
static const uint8_t PRE_SALE_MINT_SELECTOR[SELECTOR_SIZE] = {0x82, 0x74, 0x81, 0xea};

// Function: stableMintSign
// Selector: 0x11413601
static const uint8_t STABLE_MINT_SIGN_SELECTOR[SELECTOR_SIZE] = {0x11, 0x41, 0x36, 0x01};

// Function: stableMint
// Selector: 0x804b936f
static const uint8_t STABLE_MINT_SELECTOR[SELECTOR_SIZE] = {0x80, 0x4b, 0x93, 0x6f};

// Function: mintSign
// Selector: 0xf39247a9
static const uint8_t MINT_SIGN_SELECTOR[SELECTOR_SIZE] = {0xf3, 0x92, 0x47, 0xa9};

// Function: mint (v2)
// Selector: 0xa0712d68
static const uint8_t MINT_V2_SELECTOR[SELECTOR_SIZE] = {0xa0, 0x71, 0x2d, 0x68};

// Function: mintSign (v2)
// Selector: 0x657bb113
static const uint8_t MINT_SIGN_V2_SELECTOR[SELECTOR_SIZE] = {0x65, 0x7b, 0xb1, 0x13};

// Plugin uses 0x00000 as a dummy address to reprecent ETH.
const uint8_t NULL_ETH_ADDRESS[ADDRESS_LENGTH] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                                                  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                                                  0x00, 0x00, 0x00, 0x00, 0x00, 0x00};

// Array of all the different nft selectors.
const uint8_t *const LEDGER_NFT_SELECTORS[NUM_SELECTORS] = {
    MINT_SELECTOR,
    PRE_SALE_MINT_SELECTOR,
    STABLE_MINT_SIGN_SELECTOR,
    STABLE_MINT_SELECTOR,
    MINT_SIGN_SELECTOR,
    MINT_V2_SELECTOR,
    MINT_SIGN_V2_SELECTOR,
};
