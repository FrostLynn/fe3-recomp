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

// Function: sub_01C78028
// Address: 0x1c78028 - 0x1c78128
void sub_01C78028_0x1c78028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C78028_0x1c78028");
#endif

    switch (ctx->pc) {
        case 0x1c78048u: goto label_1c78048;
        case 0x1c78058u: goto label_1c78058;
        case 0x1c78064u: goto label_1c78064;
        case 0x1c78074u: goto label_1c78074;
        case 0x1c7808cu: goto label_1c7808c;
        case 0x1c780a4u: goto label_1c780a4;
        case 0x1c780c8u: goto label_1c780c8;
        case 0x1c780f0u: goto label_1c780f0;
        default: break;
    }

    ctx->pc = 0x1c78028u;

    // 0x1c78028: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c78028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c7802c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c7802cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c78030: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c78030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c78034: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c78034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c78038: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c78038u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7803c: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c7803cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c78040: 0xc71d656  jal         func_1C75958
    ctx->pc = 0x1C78040u;
    SET_GPR_U32(ctx, 31, 0x1C78048u);
    ctx->pc = 0x1C78044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C78040u;
    // 0x1c78044: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75958u, 0x1C78040u, 0x1C78048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C78048u;
label_1c78048:
    // 0x1c78048: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1c78048u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1c7804c: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1c7804cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1c78050: 0xc71d8fc  jal         func_1C763F0
    ctx->pc = 0x1C78050u;
    SET_GPR_U32(ctx, 31, 0x1C78058u);
    ctx->pc = 0x1C78054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C78050u;
    // 0x1c78054: 0x248400c0  addiu       $a0, $a0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C763F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C763F0u, 0x1C78050u, 0x1C78058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C78058u;
label_1c78058:
    // 0x1c78058: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x1c78058u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1c7805c: 0xc71d656  jal         func_1C75958
    ctx->pc = 0x1C7805Cu;
    SET_GPR_U32(ctx, 31, 0x1C78064u);
    ctx->pc = 0x1C78060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7805Cu;
    // 0x1c78060: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75958u, 0x1C7805Cu, 0x1C78064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C78064u;
label_1c78064:
    // 0x1c78064: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1c78064u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1c78068: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1c78068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1c7806c: 0xc71d8fc  jal         func_1C763F0
    ctx->pc = 0x1C7806Cu;
    SET_GPR_U32(ctx, 31, 0x1C78074u);
    ctx->pc = 0x1C78070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7806Cu;
    // 0x1c78070: 0x24840300  addiu       $a0, $a0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C763F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C763F0u, 0x1C7806Cu, 0x1C78074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C78074u;
label_1c78074:
    // 0x1c78074: 0x8e2f0018  lw          $t7, 0x18($s1)
    ctx->pc = 0x1c78074u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1c78078: 0x15e00026  bnez        $t7, . + 4 + (0x26 << 2)
    ctx->pc = 0x1C78078u;
    {
        const bool branch_taken_0x1c78078 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C7807Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C78078u;
        // 0x1c7807c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c78078) {
            ctx->pc = 0x1C78114u;
            goto label_1c78114;
        }
    }
    ctx->pc = 0x1C78080u;
    // 0x1c78080: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1c78080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c78084: 0xc71d668  jal         func_1C759A0
    ctx->pc = 0x1C78084u;
    SET_GPR_U32(ctx, 31, 0x1C7808Cu);
    ctx->pc = 0x1C78088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C78084u;
    // 0x1c78088: 0x24840140  addiu       $a0, $a0, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C759A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C759A0u, 0x1C78084u, 0x1C7808Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7808Cu;
label_1c7808c:
    // 0x1c7808c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1c7808cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1c78090: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1C78090u;
    {
        const bool branch_taken_0x1c78090 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C78094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C78090u;
        // 0x1c78094: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c78090) {
            ctx->pc = 0x1C78114u;
            goto label_1c78114;
        }
    }
    ctx->pc = 0x1C78098u;
    // 0x1c78098: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x1c78098u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1c7809c: 0xc71d656  jal         func_1C75958
    ctx->pc = 0x1C7809Cu;
    SET_GPR_U32(ctx, 31, 0x1C780A4u);
    ctx->pc = 0x1C780A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7809Cu;
    // 0x1c780a0: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75958u, 0x1C7809Cu, 0x1C780A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C780A4u;
label_1c780a4:
    // 0x1c780a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c780a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c780a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c780a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c780ac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c780acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c780b0: 0x24060194  addiu       $a2, $zero, 0x194
    ctx->pc = 0x1c780b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 404));
    // 0x1c780b4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c780b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c780b8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c780b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c780bc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1c780bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c780c0: 0xc71d8e4  jal         func_1C76390
    ctx->pc = 0x1C780C0u;
    SET_GPR_U32(ctx, 31, 0x1C780C8u);
    ctx->pc = 0x1C780C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C780C0u;
    // 0x1c780c4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C76390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C76390u, 0x1C780C0u, 0x1C780C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C780C8u;
label_1c780c8:
    // 0x1c780c8: 0xa2000cf9  sb          $zero, 0xCF9($s0)
    ctx->pc = 0x1c780c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3321), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c780cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c780ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c780d0: 0xa2000021  sb          $zero, 0x21($s0)
    ctx->pc = 0x1c780d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 33), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c780d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c780d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c780d8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c780d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c780dc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c780dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c780e0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c780e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c780e4: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1c780e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c780e8: 0xc71d662  jal         func_1C75988
    ctx->pc = 0x1C780E8u;
    SET_GPR_U32(ctx, 31, 0x1C780F0u);
    ctx->pc = 0x1C780ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C780E8u;
    // 0x1c780ec: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75988u, 0x1C780E8u, 0x1C780F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C780F0u;
label_1c780f0:
    // 0x1c780f0: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c780f0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c780f4: 0x8e2d0000  lw          $t5, 0x0($s1)
    ctx->pc = 0x1c780f4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c780f8: 0xae2f0018  sw          $t7, 0x18($s1)
    ctx->pc = 0x1c780f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 15));
    // 0x1c780fc: 0x8dae0328  lw          $t6, 0x328($t5)
    ctx->pc = 0x1c780fcu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 808)));
    // 0x1c78100: 0x240f0002  addiu       $t7, $zero, 0x2
    ctx->pc = 0x1c78100u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c78104: 0x15cf0003  bne         $t6, $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C78104u;
    {
        const bool branch_taken_0x1c78104 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C78108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C78104u;
        // 0x1c78108: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c78104) {
            ctx->pc = 0x1C78114u;
            goto label_1c78114;
        }
    }
    ctx->pc = 0x1C7810Cu;
    // 0x1c7810c: 0x240f0003  addiu       $t7, $zero, 0x3
    ctx->pc = 0x1c7810cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c78110: 0xadaf0328  sw          $t7, 0x328($t5)
    ctx->pc = 0x1c78110u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 808), GPR_U32(ctx, 15));
label_1c78114:
    // 0x1c78114: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c78114u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c78118: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c78118u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c7811c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c7811cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c78120: 0x3e00008  jr          $ra
    ctx->pc = 0x1C78120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C78124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C78120u;
        // 0x1c78124: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C78120u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C78128u;
}
