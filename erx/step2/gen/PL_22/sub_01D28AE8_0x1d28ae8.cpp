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

// Function: sub_01D28AE8
// Address: 0x1d28ae8 - 0x1d28b28
void sub_01D28AE8_0x1d28ae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D28AE8_0x1d28ae8");
#endif

    switch (ctx->pc) {
        case 0x1d28b04u: goto label_1d28b04;
        case 0x1d28b14u: goto label_1d28b14;
        default: break;
    }

    ctx->pc = 0x1d28ae8u;

    // 0x1d28ae8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d28ae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d28aec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d28aecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d28af0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d28af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d28af4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d28af4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d28af8: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d28af8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d28afc: 0xc749b1c  jal         func_1D26C70
    ctx->pc = 0x1D28AFCu;
    SET_GPR_U32(ctx, 31, 0x1D28B04u);
    ctx->pc = 0x1D28B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D28AFCu;
    // 0x1d28b00: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C70u, 0x1D28AFCu, 0x1D28B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D28B04u;
label_1d28b04:
    // 0x1d28b04: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d28b04u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d28b08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d28b08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d28b0c: 0xc749b30  jal         func_1D26CC0
    ctx->pc = 0x1D28B0Cu;
    SET_GPR_U32(ctx, 31, 0x1D28B14u);
    ctx->pc = 0x1D28B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D28B0Cu;
    // 0x1d28b10: 0xa04f09b0  sb          $t7, 0x9B0($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 2480), (uint8_t)GPR_U32(ctx, 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26CC0u, 0x1D28B0Cu, 0x1D28B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D28B14u;
label_1d28b14:
    // 0x1d28b14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d28b14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d28b18: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d28b18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d28b1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d28b1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d28b20: 0x8749b24  j           func_1D26C90
    ctx->pc = 0x1D28B20u;
    ctx->pc = 0x1D28B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D28B20u;
    // 0x1d28b24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C90u;
    sub_01D26C90_0x1d26c90(rdram, ctx, runtime); return;
    ctx->pc = 0x1D28B28u;
}
