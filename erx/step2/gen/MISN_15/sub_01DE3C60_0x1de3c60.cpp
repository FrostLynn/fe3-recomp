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

// Function: sub_01DE3C60
// Address: 0x1de3c60 - 0x1de3cf0
void sub_01DE3C60_0x1de3c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DE3C60_0x1de3c60");
#endif

    switch (ctx->pc) {
        case 0x1de3c84u: goto label_1de3c84;
        case 0x1de3c98u: goto label_1de3c98;
        case 0x1de3cacu: goto label_1de3cac;
        case 0x1de3cbcu: goto label_1de3cbc;
        case 0x1de3cc4u: goto label_1de3cc4;
        default: break;
    }

    ctx->pc = 0x1de3c60u;

    // 0x1de3c60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1de3c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1de3c64: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1de3c64u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1de3c68: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1de3c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1de3c6c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1de3c6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1de3c70: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1de3c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1de3c74: 0x8de400e0  lw          $a0, 0xE0($t7)
    ctx->pc = 0x1de3c74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    // 0x1de3c78: 0x8c90000c  lw          $s0, 0xC($a0)
    ctx->pc = 0x1de3c78u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1de3c7c: 0xc778dc8  jal         func_1DE3720
    ctx->pc = 0x1DE3C7Cu;
    SET_GPR_U32(ctx, 31, 0x1DE3C84u);
    ctx->pc = 0x1DE3C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE3C7Cu;
    // 0x1de3c80: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE3720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE3720u, 0x1DE3C7Cu, 0x1DE3C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE3C84u;
label_1de3c84:
    // 0x1de3c84: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1de3c84u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1de3c88: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1de3c88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de3c8c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1de3c8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de3c90: 0xc778dcc  jal         func_1DE3730
    ctx->pc = 0x1DE3C90u;
    SET_GPR_U32(ctx, 31, 0x1DE3C98u);
    ctx->pc = 0x1DE3C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE3C90u;
    // 0x1de3c94: 0x8de400e0  lw          $a0, 0xE0($t7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE3730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE3730u, 0x1DE3C90u, 0x1DE3C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE3C98u;
label_1de3c98:
    // 0x1de3c98: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1de3c98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de3c9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1de3c9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de3ca0: 0x2405015c  addiu       $a1, $zero, 0x15C
    ctx->pc = 0x1de3ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 348));
    // 0x1de3ca4: 0xc778e50  jal         func_1DE3940
    ctx->pc = 0x1DE3CA4u;
    SET_GPR_U32(ctx, 31, 0x1DE3CACu);
    ctx->pc = 0x1DE3CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE3CA4u;
    // 0x1de3ca8: 0x2406015d  addiu       $a2, $zero, 0x15D (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 349));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE3940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE3940u, 0x1DE3CA4u, 0x1DE3CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE3CACu;
label_1de3cac:
    // 0x1de3cac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1de3cacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de3cb0: 0x2405014e  addiu       $a1, $zero, 0x14E
    ctx->pc = 0x1de3cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 334));
    // 0x1de3cb4: 0xc778e50  jal         func_1DE3940
    ctx->pc = 0x1DE3CB4u;
    SET_GPR_U32(ctx, 31, 0x1DE3CBCu);
    ctx->pc = 0x1DE3CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE3CB4u;
    // 0x1de3cb8: 0x2406014f  addiu       $a2, $zero, 0x14F (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 335));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE3940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE3940u, 0x1DE3CB4u, 0x1DE3CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE3CBCu;
label_1de3cbc:
    // 0x1de3cbc: 0xc778e7c  jal         func_1DE39F0
    ctx->pc = 0x1DE3CBCu;
    SET_GPR_U32(ctx, 31, 0x1DE3CC4u);
    ctx->pc = 0x1DE39F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE39F0u, 0x1DE3CBCu, 0x1DE3CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE3CC4u;
label_1de3cc4:
    // 0x1de3cc4: 0x8f848014  lw          $a0, -0x7FEC($gp)
    ctx->pc = 0x1de3cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1de3cc8: 0x2405270f  addiu       $a1, $zero, 0x270F
    ctx->pc = 0x1de3cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
    // 0x1de3ccc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1de3cccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1de3cd0: 0x2406270f  addiu       $a2, $zero, 0x270F
    ctx->pc = 0x1de3cd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
    // 0x1de3cd4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1de3cd4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1de3cd8: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1de3cd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1de3cdc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1de3cdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1de3ce0: 0x2408fffe  addiu       $t0, $zero, -0x2
    ctx->pc = 0x1de3ce0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1de3ce4: 0x8778dd6  j           func_1DE3758
    ctx->pc = 0x1DE3CE4u;
    ctx->pc = 0x1DE3CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE3CE4u;
    // 0x1de3ce8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE3758u;
    sub_01DE3758_0x1de3758(rdram, ctx, runtime); return;
    ctx->pc = 0x1DE3CECu;
    // 0x1de3cec: 0x0  nop
    ctx->pc = 0x1de3cecu;
    // NOP
    ctx->pc = 0x1de3cf0u;
}
