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

// Function: sub_01C6C448
// Address: 0x1c6c448 - 0x1c6c4d8
void sub_01C6C448_0x1c6c448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C6C448_0x1c6c448");
#endif

    switch (ctx->pc) {
        case 0x1c6c46cu: goto label_1c6c46c;
        case 0x1c6c484u: goto label_1c6c484;
        case 0x1c6c4a4u: goto label_1c6c4a4;
        default: break;
    }

    ctx->pc = 0x1c6c448u;

    // 0x1c6c448: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c6c448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c6c44c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c6c44cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c6c450: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c6c450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c6c454: 0x8c8f0018  lw          $t7, 0x18($a0)
    ctx->pc = 0x1c6c454u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1c6c458: 0x15e00019  bnez        $t7, . + 4 + (0x19 << 2)
    ctx->pc = 0x1C6C458u;
    {
        const bool branch_taken_0x1c6c458 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C6C45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6C458u;
        // 0x1c6c45c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6c458) {
            ctx->pc = 0x1C6C4C0u;
            goto label_1c6c4c0;
        }
    }
    ctx->pc = 0x1C6C460u;
    // 0x1c6c460: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1c6c460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c6c464: 0xc71a7aa  jal         func_1C69EA8
    ctx->pc = 0x1C6C464u;
    SET_GPR_U32(ctx, 31, 0x1C6C46Cu);
    ctx->pc = 0x1C6C468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6C464u;
    // 0x1c6c468: 0x24840140  addiu       $a0, $a0, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C69EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C69EA8u, 0x1C6C464u, 0x1C6C46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6C46Cu;
label_1c6c46c:
    // 0x1c6c46c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1c6c46cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1c6c470: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1C6C470u;
    {
        const bool branch_taken_0x1c6c470 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6C474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6C470u;
        // 0x1c6c474: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6c470) {
            ctx->pc = 0x1C6C4C4u;
            goto label_1c6c4c4;
        }
    }
    ctx->pc = 0x1C6C478u;
    // 0x1c6c478: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1c6c478u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c6c47c: 0xc71a798  jal         func_1C69E60
    ctx->pc = 0x1C6C47Cu;
    SET_GPR_U32(ctx, 31, 0x1C6C484u);
    ctx->pc = 0x1C6C480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6C47Cu;
    // 0x1c6c480: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C69E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C69E60u, 0x1C6C47Cu, 0x1C6C484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6C484u;
label_1c6c484:
    // 0x1c6c484: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c6c484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6c488: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c6c488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c6c48c: 0x24060193  addiu       $a2, $zero, 0x193
    ctx->pc = 0x1c6c48cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 403));
    // 0x1c6c490: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c6c490u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6c494: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c6c494u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6c498: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1c6c498u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6c49c: 0xc71aa34  jal         func_1C6A8D0
    ctx->pc = 0x1C6C49Cu;
    SET_GPR_U32(ctx, 31, 0x1C6C4A4u);
    ctx->pc = 0x1C6C4A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6C49Cu;
    // 0x1c6c4a0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6A8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6A8D0u, 0x1C6C49Cu, 0x1C6C4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6C4A4u;
label_1c6c4a4:
    // 0x1c6c4a4: 0x8e0d0000  lw          $t5, 0x0($s0)
    ctx->pc = 0x1c6c4a4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c6c4a8: 0x240f0002  addiu       $t7, $zero, 0x2
    ctx->pc = 0x1c6c4a8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c6c4ac: 0x8dae0328  lw          $t6, 0x328($t5)
    ctx->pc = 0x1c6c4acu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 808)));
    // 0x1c6c4b0: 0x15cf0004  bne         $t6, $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C6C4B0u;
    {
        const bool branch_taken_0x1c6c4b0 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C6C4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6C4B0u;
        // 0x1c6c4b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6c4b0) {
            ctx->pc = 0x1C6C4C4u;
            goto label_1c6c4c4;
        }
    }
    ctx->pc = 0x1C6C4B8u;
    // 0x1c6c4b8: 0x240f0003  addiu       $t7, $zero, 0x3
    ctx->pc = 0x1c6c4b8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c6c4bc: 0xadaf0328  sw          $t7, 0x328($t5)
    ctx->pc = 0x1c6c4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 808), GPR_U32(ctx, 15));
label_1c6c4c0:
    // 0x1c6c4c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6c4c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c6c4c4:
    // 0x1c6c4c4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c6c4c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c6c4c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c6c4c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6c4cc: 0x871ab52  j           func_1C6AD48
    ctx->pc = 0x1C6C4CCu;
    ctx->pc = 0x1C6C4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6C4CCu;
    // 0x1c6c4d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6AD48u;
    sub_01C6AD48_0x1c6ad48(rdram, ctx, runtime); return;
    ctx->pc = 0x1C6C4D4u;
    // 0x1c6c4d4: 0x0  nop
    ctx->pc = 0x1c6c4d4u;
    // NOP
    ctx->pc = 0x1c6c4d8u;
}
