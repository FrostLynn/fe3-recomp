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

// Function: sub_01DBCD40
// Address: 0x1dbcd40 - 0x1dbcde8
void sub_01DBCD40_0x1dbcd40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DBCD40_0x1dbcd40");
#endif

    switch (ctx->pc) {
        case 0x1dbcd78u: goto label_1dbcd78;
        case 0x1dbcd90u: goto label_1dbcd90;
        case 0x1dbcda4u: goto label_1dbcda4;
        case 0x1dbcdb8u: goto label_1dbcdb8;
        default: break;
    }

    ctx->pc = 0x1dbcd40u;

    // 0x1dbcd40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1dbcd40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1dbcd44: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1dbcd44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1dbcd48: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1dbcd48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1dbcd4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dbcd4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dbcd50: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1dbcd50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbcd54: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1dbcd54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1dbcd58: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1dbcd58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1dbcd5c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1dbcd5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1dbcd60: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1dbcd60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbcd64: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1dbcd64u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbcd68: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1dbcd68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1dbcd6c: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x1dbcd6cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbcd70: 0xc76ee58  jal         func_1DBB960
    ctx->pc = 0x1DBCD70u;
    SET_GPR_U32(ctx, 31, 0x1DBCD78u);
    ctx->pc = 0x1DBCD74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBCD70u;
    // 0x1dbcd74: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBB960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBB960u, 0x1DBCD70u, 0x1DBCD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBCD78u;
label_1dbcd78:
    // 0x1dbcd78: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1dbcd78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbcd7c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1dbcd7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbcd80: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1dbcd80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbcd84: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1dbcd84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dbcd88: 0xc76f32a  jal         func_1DBCCA8
    ctx->pc = 0x1DBCD88u;
    SET_GPR_U32(ctx, 31, 0x1DBCD90u);
    ctx->pc = 0x1DBCD8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBCD88u;
    // 0x1dbcd8c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBCCA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBCCA8u, 0x1DBCD88u, 0x1DBCD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBCD90u;
label_1dbcd90:
    // 0x1dbcd90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dbcd90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbcd94: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1dbcd94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbcd98: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1dbcd98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1dbcd9c: 0xc76f32a  jal         func_1DBCCA8
    ctx->pc = 0x1DBCD9Cu;
    SET_GPR_U32(ctx, 31, 0x1DBCDA4u);
    ctx->pc = 0x1DBCDA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBCD9Cu;
    // 0x1dbcda0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBCCA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBCCA8u, 0x1DBCD9Cu, 0x1DBCDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBCDA4u;
label_1dbcda4:
    // 0x1dbcda4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dbcda4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbcda8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1dbcda8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbcdac: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1dbcdacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1dbcdb0: 0xc76f32a  jal         func_1DBCCA8
    ctx->pc = 0x1DBCDB0u;
    SET_GPR_U32(ctx, 31, 0x1DBCDB8u);
    ctx->pc = 0x1DBCDB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBCDB0u;
    // 0x1dbcdb4: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBCCA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBCCA8u, 0x1DBCDB0u, 0x1DBCDB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBCDB8u;
label_1dbcdb8:
    // 0x1dbcdb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dbcdb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbcdbc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1dbcdbcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dbcdc0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1dbcdc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbcdc4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dbcdc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dbcdc8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1dbcdc8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dbcdcc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1dbcdccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1dbcdd0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1dbcdd0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1dbcdd4: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x1dbcdd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1dbcdd8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1dbcdd8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dbcddc: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1dbcddcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1dbcde0: 0x876f32a  j           func_1DBCCA8
    ctx->pc = 0x1DBCDE0u;
    ctx->pc = 0x1DBCDE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBCDE0u;
    // 0x1dbcde4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBCCA8u;
    sub_01DBCCA8_0x1dbcca8(rdram, ctx, runtime); return;
    ctx->pc = 0x1DBCDE8u;
}
