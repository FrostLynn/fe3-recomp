#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_01CEF538
// Address: 0x1cef538 - 0x1cef548
void sub_01CEF538_0x1cef538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CEF538_0x1cef538");
#endif

    ctx->pc = 0x1cef538u;

    // 0x1cef538: 0x0  nop
    ctx->pc = 0x1cef538u;
    // NOP
    // 0x1cef53c: 0x0  nop
    ctx->pc = 0x1cef53cu;
    // NOP
    // 0x1cef540: 0x0  nop
    ctx->pc = 0x1cef540u;
    // NOP
    // 0x1cef544: 0x0  nop
    ctx->pc = 0x1cef544u;
    // NOP
    ctx->pc = 0x1cef548u;
}
