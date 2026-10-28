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

// Function: sub_01DE0880
// Address: 0x1de0880 - 0x1de08f8
void sub_01DE0880_0x1de0880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DE0880_0x1de0880");
#endif

    switch (ctx->pc) {
        case 0x1de08a4u: goto label_1de08a4;
        case 0x1de08b8u: goto label_1de08b8;
        default: break;
    }

    ctx->pc = 0x1de0880u;

    // 0x1de0880: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1de0880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1de0884: 0x8f8f8018  lw          $t7, -0x7FE8($gp)
    ctx->pc = 0x1de0884u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
    // 0x1de0888: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1de0888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1de088c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1de088cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1de0890: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1de0890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1de0894: 0x8de400e0  lw          $a0, 0xE0($t7)
    ctx->pc = 0x1de0894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    // 0x1de0898: 0x8c90000c  lw          $s0, 0xC($a0)
    ctx->pc = 0x1de0898u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1de089c: 0xc7781c6  jal         func_1DE0718
    ctx->pc = 0x1DE089Cu;
    SET_GPR_U32(ctx, 31, 0x1DE08A4u);
    ctx->pc = 0x1DE08A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE089Cu;
    // 0x1de08a0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE0718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE0718u, 0x1DE089Cu, 0x1DE08A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE08A4u;
label_1de08a4:
    // 0x1de08a4: 0x8f8f8018  lw          $t7, -0x7FE8($gp)
    ctx->pc = 0x1de08a4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
    // 0x1de08a8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1de08a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de08ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1de08acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de08b0: 0xc7781ca  jal         func_1DE0728
    ctx->pc = 0x1DE08B0u;
    SET_GPR_U32(ctx, 31, 0x1DE08B8u);
    ctx->pc = 0x1DE08B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE08B0u;
    // 0x1de08b4: 0x8de400e0  lw          $a0, 0xE0($t7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE0728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE0728u, 0x1DE08B0u, 0x1DE08B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE08B8u;
label_1de08b8:
    // 0x1de08b8: 0x8e2f024c  lw          $t7, 0x24C($s1)
    ctx->pc = 0x1de08b8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 588)));
    // 0x1de08bc: 0x240e019e  addiu       $t6, $zero, 0x19E
    ctx->pc = 0x1de08bcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 414));
    // 0x1de08c0: 0x8ded4888  lw          $t5, 0x4888($t7)
    ctx->pc = 0x1de08c0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18568)));
    // 0x1de08c4: 0x15ae0007  bne         $t5, $t6, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DE08C4u;
    {
        const bool branch_taken_0x1de08c4 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 14));
        ctx->pc = 0x1DE08C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE08C4u;
        // 0x1de08c8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de08c4) {
            ctx->pc = 0x1DE08E4u;
            goto label_1de08e4;
        }
    }
    ctx->pc = 0x1DE08CCu;
    // 0x1de08cc: 0x8f8d8018  lw          $t5, -0x7FE8($gp)
    ctx->pc = 0x1de08ccu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
    // 0x1de08d0: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1de08d0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1de08d4: 0x95ae056e  lhu         $t6, 0x56E($t5)
    ctx->pc = 0x1de08d4u;
    SET_GPR_ZE32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 1390)));
    // 0x1de08d8: 0xa1af0429  sb          $t7, 0x429($t5)
    ctx->pc = 0x1de08d8u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 1065), (uint8_t)GPR_U32(ctx, 15));
    // 0x1de08dc: 0x35ce0004  ori         $t6, $t6, 0x4
    ctx->pc = 0x1de08dcu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)4);
    // 0x1de08e0: 0xa5ae056e  sh          $t6, 0x56E($t5)
    ctx->pc = 0x1de08e0u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 1390), (uint16_t)GPR_U32(ctx, 14));
label_1de08e4:
    // 0x1de08e4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1de08e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1de08e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1de08e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1de08ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE08ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE08F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE08ECu;
        // 0x1de08f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE08ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE08F4u;
    // 0x1de08f4: 0x0  nop
    ctx->pc = 0x1de08f4u;
    // NOP
    ctx->pc = 0x1de08f8u;
}
