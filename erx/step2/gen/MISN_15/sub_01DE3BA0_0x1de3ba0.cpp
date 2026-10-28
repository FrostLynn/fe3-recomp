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

// Function: sub_01DE3BA0
// Address: 0x1de3ba0 - 0x1de3c38
void sub_01DE3BA0_0x1de3ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DE3BA0_0x1de3ba0");
#endif

    switch (ctx->pc) {
        case 0x1de3bc4u: goto label_1de3bc4;
        case 0x1de3bd8u: goto label_1de3bd8;
        case 0x1de3becu: goto label_1de3bec;
        case 0x1de3bfcu: goto label_1de3bfc;
        case 0x1de3c04u: goto label_1de3c04;
        case 0x1de3c0cu: goto label_1de3c0c;
        default: break;
    }

    ctx->pc = 0x1de3ba0u;

    // 0x1de3ba0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1de3ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1de3ba4: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1de3ba4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1de3ba8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1de3ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1de3bac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1de3bacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1de3bb0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1de3bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1de3bb4: 0x8de400e0  lw          $a0, 0xE0($t7)
    ctx->pc = 0x1de3bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    // 0x1de3bb8: 0x8c90000c  lw          $s0, 0xC($a0)
    ctx->pc = 0x1de3bb8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1de3bbc: 0xc778dc8  jal         func_1DE3720
    ctx->pc = 0x1DE3BBCu;
    SET_GPR_U32(ctx, 31, 0x1DE3BC4u);
    ctx->pc = 0x1DE3BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE3BBCu;
    // 0x1de3bc0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE3720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE3720u, 0x1DE3BBCu, 0x1DE3BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE3BC4u;
label_1de3bc4:
    // 0x1de3bc4: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1de3bc4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1de3bc8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1de3bc8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de3bcc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1de3bccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de3bd0: 0xc778dcc  jal         func_1DE3730
    ctx->pc = 0x1DE3BD0u;
    SET_GPR_U32(ctx, 31, 0x1DE3BD8u);
    ctx->pc = 0x1DE3BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE3BD0u;
    // 0x1de3bd4: 0x8de400e0  lw          $a0, 0xE0($t7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE3730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE3730u, 0x1DE3BD0u, 0x1DE3BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE3BD8u;
label_1de3bd8:
    // 0x1de3bd8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1de3bd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de3bdc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1de3bdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de3be0: 0x2405015c  addiu       $a1, $zero, 0x15C
    ctx->pc = 0x1de3be0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 348));
    // 0x1de3be4: 0xc778e50  jal         func_1DE3940
    ctx->pc = 0x1DE3BE4u;
    SET_GPR_U32(ctx, 31, 0x1DE3BECu);
    ctx->pc = 0x1DE3BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE3BE4u;
    // 0x1de3be8: 0x2406015d  addiu       $a2, $zero, 0x15D (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 349));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE3940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE3940u, 0x1DE3BE4u, 0x1DE3BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE3BECu;
label_1de3bec:
    // 0x1de3bec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1de3becu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de3bf0: 0x2405014e  addiu       $a1, $zero, 0x14E
    ctx->pc = 0x1de3bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 334));
    // 0x1de3bf4: 0xc778e50  jal         func_1DE3940
    ctx->pc = 0x1DE3BF4u;
    SET_GPR_U32(ctx, 31, 0x1DE3BFCu);
    ctx->pc = 0x1DE3BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE3BF4u;
    // 0x1de3bf8: 0x2406014f  addiu       $a2, $zero, 0x14F (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 335));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE3940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE3940u, 0x1DE3BF4u, 0x1DE3BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE3BFCu;
label_1de3bfc:
    // 0x1de3bfc: 0xc778e7e  jal         func_1DE39F8
    ctx->pc = 0x1DE3BFCu;
    SET_GPR_U32(ctx, 31, 0x1DE3C04u);
    ctx->pc = 0x1DE39F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE39F8u, 0x1DE3BFCu, 0x1DE3C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE3C04u;
label_1de3c04:
    // 0x1de3c04: 0xc778e7c  jal         func_1DE39F0
    ctx->pc = 0x1DE3C04u;
    SET_GPR_U32(ctx, 31, 0x1DE3C0Cu);
    ctx->pc = 0x1DE39F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE39F0u, 0x1DE3C04u, 0x1DE3C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE3C0Cu;
label_1de3c0c:
    // 0x1de3c0c: 0x8f848014  lw          $a0, -0x7FEC($gp)
    ctx->pc = 0x1de3c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1de3c10: 0x2405270f  addiu       $a1, $zero, 0x270F
    ctx->pc = 0x1de3c10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
    // 0x1de3c14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1de3c14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1de3c18: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1de3c18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1de3c1c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1de3c1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1de3c20: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1de3c20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1de3c24: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1de3c24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1de3c28: 0x2408fffe  addiu       $t0, $zero, -0x2
    ctx->pc = 0x1de3c28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1de3c2c: 0x8778dd6  j           func_1DE3758
    ctx->pc = 0x1DE3C2Cu;
    ctx->pc = 0x1DE3C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE3C2Cu;
    // 0x1de3c30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE3758u;
    sub_01DE3758_0x1de3758(rdram, ctx, runtime); return;
    ctx->pc = 0x1DE3C34u;
    // 0x1de3c34: 0x0  nop
    ctx->pc = 0x1de3c34u;
    // NOP
    ctx->pc = 0x1de3c38u;
}
