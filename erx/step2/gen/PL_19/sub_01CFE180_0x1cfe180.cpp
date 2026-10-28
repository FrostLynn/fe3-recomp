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

// Function: sub_01CFE180
// Address: 0x1cfe180 - 0x1cfe248
void sub_01CFE180_0x1cfe180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CFE180_0x1cfe180");
#endif

    switch (ctx->pc) {
        case 0x1cfe19cu: goto label_1cfe19c;
        case 0x1cfe1acu: goto label_1cfe1ac;
        case 0x1cfe1b8u: goto label_1cfe1b8;
        case 0x1cfe1c8u: goto label_1cfe1c8;
        case 0x1cfe1e0u: goto label_1cfe1e0;
        case 0x1cfe20cu: goto label_1cfe20c;
        default: break;
    }

    ctx->pc = 0x1cfe180u;

    // 0x1cfe180: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cfe180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cfe184: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cfe184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cfe188: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cfe188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cfe18c: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1cfe18cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1cfe190: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cfe190u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfe194: 0xc73f49a  jal         func_1CFD268
    ctx->pc = 0x1CFE194u;
    SET_GPR_U32(ctx, 31, 0x1CFE19Cu);
    ctx->pc = 0x1CFE198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFE194u;
    // 0x1cfe198: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD268u, 0x1CFE194u, 0x1CFE19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFE19Cu;
label_1cfe19c:
    // 0x1cfe19c: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1cfe19cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1cfe1a0: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1cfe1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1cfe1a4: 0xc73f758  jal         func_1CFDD60
    ctx->pc = 0x1CFE1A4u;
    SET_GPR_U32(ctx, 31, 0x1CFE1ACu);
    ctx->pc = 0x1CFE1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFE1A4u;
    // 0x1cfe1a8: 0x248400c0  addiu       $a0, $a0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFDD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFDD60u, 0x1CFE1A4u, 0x1CFE1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFE1ACu;
label_1cfe1ac:
    // 0x1cfe1ac: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1cfe1acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1cfe1b0: 0xc73f49a  jal         func_1CFD268
    ctx->pc = 0x1CFE1B0u;
    SET_GPR_U32(ctx, 31, 0x1CFE1B8u);
    ctx->pc = 0x1CFE1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFE1B0u;
    // 0x1cfe1b4: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD268u, 0x1CFE1B0u, 0x1CFE1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFE1B8u;
label_1cfe1b8:
    // 0x1cfe1b8: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1cfe1b8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1cfe1bc: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1cfe1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1cfe1c0: 0xc73f758  jal         func_1CFDD60
    ctx->pc = 0x1CFE1C0u;
    SET_GPR_U32(ctx, 31, 0x1CFE1C8u);
    ctx->pc = 0x1CFE1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFE1C0u;
    // 0x1cfe1c4: 0x24840300  addiu       $a0, $a0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFDD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFDD60u, 0x1CFE1C0u, 0x1CFE1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFE1C8u;
label_1cfe1c8:
    // 0x1cfe1c8: 0x8e0f0018  lw          $t7, 0x18($s0)
    ctx->pc = 0x1cfe1c8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1cfe1cc: 0x55e00019  bnel        $t7, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x1CFE1CCu;
    {
        const bool branch_taken_0x1cfe1cc = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cfe1cc) {
            ctx->pc = 0x1CFE1D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CFE1CCu;
            // 0x1cfe1d0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CFE234u;
            goto label_1cfe234;
        }
    }
    ctx->pc = 0x1CFE1D4u;
    // 0x1cfe1d4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1cfe1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cfe1d8: 0xc73f4ac  jal         func_1CFD2B0
    ctx->pc = 0x1CFE1D8u;
    SET_GPR_U32(ctx, 31, 0x1CFE1E0u);
    ctx->pc = 0x1CFE1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFE1D8u;
    // 0x1cfe1dc: 0x24840140  addiu       $a0, $a0, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD2B0u, 0x1CFE1D8u, 0x1CFE1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFE1E0u;
label_1cfe1e0:
    // 0x1cfe1e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cfe1e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfe1e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cfe1e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfe1e8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1cfe1e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cfe1ec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cfe1ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfe1f0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cfe1f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfe1f4: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1cfe1f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cfe1f8: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1cfe1f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1cfe1fc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1CFE1FCu;
    {
        const bool branch_taken_0x1cfe1fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFE200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFE1FCu;
        // 0x1cfe200: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfe1fc) {
            ctx->pc = 0x1CFE230u;
            goto label_1cfe230;
        }
    }
    ctx->pc = 0x1CFE204u;
    // 0x1cfe204: 0xc73f4a6  jal         func_1CFD298
    ctx->pc = 0x1CFE204u;
    SET_GPR_U32(ctx, 31, 0x1CFE20Cu);
    ctx->pc = 0x1CFD298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD298u, 0x1CFE204u, 0x1CFE20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFE20Cu;
label_1cfe20c:
    // 0x1cfe20c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1cfe20cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cfe210: 0x8e0d0000  lw          $t5, 0x0($s0)
    ctx->pc = 0x1cfe210u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cfe214: 0xae0f0018  sw          $t7, 0x18($s0)
    ctx->pc = 0x1cfe214u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 15));
    // 0x1cfe218: 0x8dae0328  lw          $t6, 0x328($t5)
    ctx->pc = 0x1cfe218u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 808)));
    // 0x1cfe21c: 0x240f0002  addiu       $t7, $zero, 0x2
    ctx->pc = 0x1cfe21cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cfe220: 0x15cf0004  bne         $t6, $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CFE220u;
    {
        const bool branch_taken_0x1cfe220 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x1CFE224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFE220u;
        // 0x1cfe224: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfe220) {
            ctx->pc = 0x1CFE234u;
            goto label_1cfe234;
        }
    }
    ctx->pc = 0x1CFE228u;
    // 0x1cfe228: 0x240f0003  addiu       $t7, $zero, 0x3
    ctx->pc = 0x1cfe228u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cfe22c: 0xadaf0328  sw          $t7, 0x328($t5)
    ctx->pc = 0x1cfe22cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 808), GPR_U32(ctx, 15));
label_1cfe230:
    // 0x1cfe230: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cfe230u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cfe234:
    // 0x1cfe234: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1cfe234u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfe238: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cfe238u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cfe23c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CFE23Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CFE240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFE23Cu;
        // 0x1cfe240: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CFE23Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CFE244u;
    // 0x1cfe244: 0x0  nop
    ctx->pc = 0x1cfe244u;
    // NOP
    ctx->pc = 0x1cfe248u;
}
