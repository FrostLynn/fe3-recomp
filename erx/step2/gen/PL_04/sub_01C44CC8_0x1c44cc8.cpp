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

// Function: sub_01C44CC8
// Address: 0x1c44cc8 - 0x1c44d28
void sub_01C44CC8_0x1c44cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C44CC8_0x1c44cc8");
#endif

    switch (ctx->pc) {
        case 0x1c44cf0u: goto label_1c44cf0;
        case 0x1c44d00u: goto label_1c44d00;
        default: break;
    }

    ctx->pc = 0x1c44cc8u;

    // 0x1c44cc8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c44cc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c44ccc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c44cccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c44cd0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1c44cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1c44cd4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c44cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c44cd8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c44cd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c44cdc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c44cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c44ce0: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1c44ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c44ce4: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1c44ce4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c44ce8: 0xc710916  jal         func_1C42458
    ctx->pc = 0x1C44CE8u;
    SET_GPR_U32(ctx, 31, 0x1C44CF0u);
    ctx->pc = 0x1C44CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C44CE8u;
    // 0x1c44cec: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C42458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C42458u, 0x1C44CE8u, 0x1C44CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C44CF0u;
label_1c44cf0:
    // 0x1c44cf0: 0xa0520950  sb          $s2, 0x950($v0)
    ctx->pc = 0x1c44cf0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2384), (uint8_t)GPR_U32(ctx, 18));
    // 0x1c44cf4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c44cf4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c44cf8: 0xc71092c  jal         func_1C424B0
    ctx->pc = 0x1C44CF8u;
    SET_GPR_U32(ctx, 31, 0x1C44D00u);
    ctx->pc = 0x1C44CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C44CF8u;
    // 0x1c44cfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C424B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C424B0u, 0x1C44CF8u, 0x1C44D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C44D00u;
label_1c44d00:
    // 0x1c44d00: 0xa2320020  sb          $s2, 0x20($s1)
    ctx->pc = 0x1c44d00u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 32), (uint8_t)GPR_U32(ctx, 18));
    // 0x1c44d04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c44d04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c44d08: 0xa2320021  sb          $s2, 0x21($s1)
    ctx->pc = 0x1c44d08u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 33), (uint8_t)GPR_U32(ctx, 18));
    // 0x1c44d0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c44d0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c44d10: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c44d10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c44d14: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c44d14u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c44d18: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1c44d18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c44d1c: 0x8710bce  j           func_1C42F38
    ctx->pc = 0x1C44D1Cu;
    ctx->pc = 0x1C44D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C44D1Cu;
    // 0x1c44d20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C42F38u;
    sub_01C42F38_0x1c42f38(rdram, ctx, runtime); return;
    ctx->pc = 0x1C44D24u;
    // 0x1c44d24: 0x0  nop
    ctx->pc = 0x1c44d24u;
    // NOP
    ctx->pc = 0x1c44d28u;
}
