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

// Function: sub_01CFD958
// Address: 0x1cfd958 - 0x1cfd960
void sub_01CFD958_0x1cfd958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CFD958_0x1cfd958");
#endif

    ctx->pc = 0x1cfd958u;

    // 0x1cfd958: 0x80b2060  j           func_2C8180
    ctx->pc = 0x1CFD958u;
    ctx->pc = 0x2C8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8180u, 0x1CFD958u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CFD960u;
}
