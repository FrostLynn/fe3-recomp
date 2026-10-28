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

// Function: sub_01C99A40
// Address: 0x1c99a40 - 0x1c99b08
void sub_01C99A40_0x1c99a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C99A40_0x1c99a40");
#endif

    switch (ctx->pc) {
        case 0x1c99a5cu: goto label_1c99a5c;
        case 0x1c99a6cu: goto label_1c99a6c;
        case 0x1c99a78u: goto label_1c99a78;
        case 0x1c99a88u: goto label_1c99a88;
        case 0x1c99aa0u: goto label_1c99aa0;
        case 0x1c99accu: goto label_1c99acc;
        default: break;
    }

    ctx->pc = 0x1c99a40u;

    // 0x1c99a40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c99a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c99a44: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c99a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c99a48: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c99a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c99a4c: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c99a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c99a50: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c99a50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c99a54: 0xc7262d6  jal         func_1C98B58
    ctx->pc = 0x1C99A54u;
    SET_GPR_U32(ctx, 31, 0x1C99A5Cu);
    ctx->pc = 0x1C99A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C99A54u;
    // 0x1c99a58: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B58u, 0x1C99A54u, 0x1C99A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C99A5Cu;
label_1c99a5c:
    // 0x1c99a5c: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1c99a5cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1c99a60: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1c99a60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1c99a64: 0xc726588  jal         func_1C99620
    ctx->pc = 0x1C99A64u;
    SET_GPR_U32(ctx, 31, 0x1C99A6Cu);
    ctx->pc = 0x1C99A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C99A64u;
    // 0x1c99a68: 0x248400c0  addiu       $a0, $a0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C99620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C99620u, 0x1C99A64u, 0x1C99A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C99A6Cu;
label_1c99a6c:
    // 0x1c99a6c: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1c99a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c99a70: 0xc7262d6  jal         func_1C98B58
    ctx->pc = 0x1C99A70u;
    SET_GPR_U32(ctx, 31, 0x1C99A78u);
    ctx->pc = 0x1C99A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C99A70u;
    // 0x1c99a74: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B58u, 0x1C99A70u, 0x1C99A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C99A78u;
label_1c99a78:
    // 0x1c99a78: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1c99a78u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1c99a7c: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1c99a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1c99a80: 0xc726588  jal         func_1C99620
    ctx->pc = 0x1C99A80u;
    SET_GPR_U32(ctx, 31, 0x1C99A88u);
    ctx->pc = 0x1C99A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C99A80u;
    // 0x1c99a84: 0x24840300  addiu       $a0, $a0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C99620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C99620u, 0x1C99A80u, 0x1C99A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C99A88u;
label_1c99a88:
    // 0x1c99a88: 0x8e0f0018  lw          $t7, 0x18($s0)
    ctx->pc = 0x1c99a88u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1c99a8c: 0x55e00019  bnel        $t7, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x1C99A8Cu;
    {
        const bool branch_taken_0x1c99a8c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c99a8c) {
            ctx->pc = 0x1C99A90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C99A8Cu;
            // 0x1c99a90: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C99AF4u;
            goto label_1c99af4;
        }
    }
    ctx->pc = 0x1C99A94u;
    // 0x1c99a94: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1c99a94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c99a98: 0xc7262e8  jal         func_1C98BA0
    ctx->pc = 0x1C99A98u;
    SET_GPR_U32(ctx, 31, 0x1C99AA0u);
    ctx->pc = 0x1C99A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C99A98u;
    // 0x1c99a9c: 0x24840140  addiu       $a0, $a0, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98BA0u, 0x1C99A98u, 0x1C99AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C99AA0u;
label_1c99aa0:
    // 0x1c99aa0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c99aa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c99aa4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c99aa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c99aa8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c99aa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c99aac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c99aacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c99ab0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c99ab0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c99ab4: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1c99ab4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c99ab8: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1c99ab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1c99abc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1C99ABCu;
    {
        const bool branch_taken_0x1c99abc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C99AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C99ABCu;
        // 0x1c99ac0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c99abc) {
            ctx->pc = 0x1C99AF0u;
            goto label_1c99af0;
        }
    }
    ctx->pc = 0x1C99AC4u;
    // 0x1c99ac4: 0xc7262e2  jal         func_1C98B88
    ctx->pc = 0x1C99AC4u;
    SET_GPR_U32(ctx, 31, 0x1C99ACCu);
    ctx->pc = 0x1C98B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B88u, 0x1C99AC4u, 0x1C99ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C99ACCu;
label_1c99acc:
    // 0x1c99acc: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c99accu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c99ad0: 0x8e0d0000  lw          $t5, 0x0($s0)
    ctx->pc = 0x1c99ad0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c99ad4: 0xae0f0018  sw          $t7, 0x18($s0)
    ctx->pc = 0x1c99ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 15));
    // 0x1c99ad8: 0x8dae0328  lw          $t6, 0x328($t5)
    ctx->pc = 0x1c99ad8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 808)));
    // 0x1c99adc: 0x240f0002  addiu       $t7, $zero, 0x2
    ctx->pc = 0x1c99adcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c99ae0: 0x15cf0004  bne         $t6, $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C99AE0u;
    {
        const bool branch_taken_0x1c99ae0 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C99AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C99AE0u;
        // 0x1c99ae4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c99ae0) {
            ctx->pc = 0x1C99AF4u;
            goto label_1c99af4;
        }
    }
    ctx->pc = 0x1C99AE8u;
    // 0x1c99ae8: 0x240f0003  addiu       $t7, $zero, 0x3
    ctx->pc = 0x1c99ae8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c99aec: 0xadaf0328  sw          $t7, 0x328($t5)
    ctx->pc = 0x1c99aecu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 808), GPR_U32(ctx, 15));
label_1c99af0:
    // 0x1c99af0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c99af0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c99af4:
    // 0x1c99af4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c99af4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c99af8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c99af8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c99afc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C99AFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C99B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C99AFCu;
        // 0x1c99b00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C99AFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C99B04u;
    // 0x1c99b04: 0x0  nop
    ctx->pc = 0x1c99b04u;
    // NOP
    ctx->pc = 0x1c99b08u;
}
