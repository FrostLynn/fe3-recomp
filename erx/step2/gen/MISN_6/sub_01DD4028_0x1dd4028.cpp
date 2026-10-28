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

// Function: sub_01DD4028
// Address: 0x1dd4028 - 0x1dd4118
void sub_01DD4028_0x1dd4028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DD4028_0x1dd4028");
#endif

    switch (ctx->pc) {
        case 0x1dd404cu: goto label_1dd404c;
        case 0x1dd4060u: goto label_1dd4060;
        case 0x1dd4088u: goto label_1dd4088;
        case 0x1dd40a0u: goto label_1dd40a0;
        case 0x1dd40dcu: goto label_1dd40dc;
        default: break;
    }

    ctx->pc = 0x1dd4028u;

    // 0x1dd4028: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1dd4028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1dd402c: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1dd402cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dd4030: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1dd4030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1dd4034: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1dd4034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1dd4038: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dd4038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dd403c: 0x8de400e0  lw          $a0, 0xE0($t7)
    ctx->pc = 0x1dd403cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    // 0x1dd4040: 0x8c90000c  lw          $s0, 0xC($a0)
    ctx->pc = 0x1dd4040u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1dd4044: 0xc774f46  jal         func_1DD3D18
    ctx->pc = 0x1DD4044u;
    SET_GPR_U32(ctx, 31, 0x1DD404Cu);
    ctx->pc = 0x1DD4048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD4044u;
    // 0x1dd4048: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD3D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD3D18u, 0x1DD4044u, 0x1DD404Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD404Cu;
label_1dd404c:
    // 0x1dd404c: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1dd404cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dd4050: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1dd4050u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd4054: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1dd4054u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd4058: 0xc774f4a  jal         func_1DD3D28
    ctx->pc = 0x1DD4058u;
    SET_GPR_U32(ctx, 31, 0x1DD4060u);
    ctx->pc = 0x1DD405Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD4058u;
    // 0x1dd405c: 0x8de400e0  lw          $a0, 0xE0($t7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD3D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD3D28u, 0x1DD4058u, 0x1DD4060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD4060u;
label_1dd4060:
    // 0x1dd4060: 0x8e2d024c  lw          $t5, 0x24C($s1)
    ctx->pc = 0x1dd4060u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 588)));
    // 0x1dd4064: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1dd4064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd4068: 0x240f00af  addiu       $t7, $zero, 0xAF
    ctx->pc = 0x1dd4068u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 175));
    // 0x1dd406c: 0x8dae4888  lw          $t6, 0x4888($t5)
    ctx->pc = 0x1dd406cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 18568)));
    // 0x1dd4070: 0x15cf0008  bne         $t6, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DD4070u;
    {
        const bool branch_taken_0x1dd4070 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x1DD4074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD4070u;
        // 0x1dd4074: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd4070) {
            ctx->pc = 0x1DD4094u;
            goto label_1dd4094;
        }
    }
    ctx->pc = 0x1DD4078u;
    // 0x1dd4078: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1dd4078u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dd407c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1dd407cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dd4080: 0xc774f60  jal         func_1DD3D80
    ctx->pc = 0x1DD4080u;
    SET_GPR_U32(ctx, 31, 0x1DD4088u);
    ctx->pc = 0x1DD4084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD4080u;
    // 0x1dd4084: 0xa1f00429  sb          $s0, 0x429($t7) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 15), 1065), (uint8_t)GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD3D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD3D80u, 0x1DD4080u, 0x1DD4088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD4088u;
label_1dd4088:
    // 0x1dd4088: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1DD4088u;
    {
        const bool branch_taken_0x1dd4088 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD408Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD4088u;
        // 0x1dd408c: 0x8f8f8014  lw          $t7, -0x7FEC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd4088) {
            ctx->pc = 0x1DD4094u;
            goto label_1dd4094;
        }
    }
    ctx->pc = 0x1DD4090u;
    // 0x1dd4090: 0xa1f00428  sb          $s0, 0x428($t7)
    ctx->pc = 0x1dd4090u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 1064), (uint8_t)GPR_U32(ctx, 16));
label_1dd4094:
    // 0x1dd4094: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dd4094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd4098: 0xc774f60  jal         func_1DD3D80
    ctx->pc = 0x1DD4098u;
    SET_GPR_U32(ctx, 31, 0x1DD40A0u);
    ctx->pc = 0x1DD409Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD4098u;
    // 0x1dd409c: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD3D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD3D80u, 0x1DD4098u, 0x1DD40A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD40A0u;
label_1dd40a0:
    // 0x1dd40a0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DD40A0u;
    {
        const bool branch_taken_0x1dd40a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD40A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD40A0u;
        // 0x1dd40a4: 0x8f8f8014  lw          $t7, -0x7FEC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd40a0) {
            ctx->pc = 0x1DD40B0u;
            goto label_1dd40b0;
        }
    }
    ctx->pc = 0x1DD40A8u;
    // 0x1dd40a8: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x1dd40a8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dd40ac: 0xa1ee042a  sb          $t6, 0x42A($t7)
    ctx->pc = 0x1dd40acu;
    WRITE8(ADD32(GPR_U32(ctx, 15), 1066), (uint8_t)GPR_U32(ctx, 14));
label_1dd40b0:
    // 0x1dd40b0: 0x8e2e03a4  lw          $t6, 0x3A4($s1)
    ctx->pc = 0x1dd40b0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 932)));
    // 0x1dd40b4: 0x240f015b  addiu       $t7, $zero, 0x15B
    ctx->pc = 0x1dd40b4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 347));
    // 0x1dd40b8: 0x15cf000d  bne         $t6, $t7, . + 4 + (0xD << 2)
    ctx->pc = 0x1DD40B8u;
    {
        const bool branch_taken_0x1dd40b8 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x1DD40BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD40B8u;
        // 0x1dd40bc: 0x8f848014  lw          $a0, -0x7FEC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd40b8) {
            ctx->pc = 0x1DD40F0u;
            goto label_1dd40f0;
        }
    }
    ctx->pc = 0x1DD40C0u;
    // 0x1dd40c0: 0x8f8e8014  lw          $t6, -0x7FEC($gp)
    ctx->pc = 0x1dd40c0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dd40c4: 0x95cf056e  lhu         $t7, 0x56E($t6)
    ctx->pc = 0x1dd40c4u;
    SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 1390)));
    // 0x1dd40c8: 0x31ef0010  andi        $t7, $t7, 0x10
    ctx->pc = 0x1dd40c8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)16);
    // 0x1dd40cc: 0x15e00004  bnez        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DD40CCu;
    {
        const bool branch_taken_0x1dd40cc = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DD40D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD40CCu;
        // 0x1dd40d0: 0x1c0202d  daddu       $a0, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd40cc) {
            ctx->pc = 0x1DD40E0u;
            goto label_1dd40e0;
        }
    }
    ctx->pc = 0x1DD40D4u;
    // 0x1dd40d4: 0xc774f56  jal         func_1DD3D58
    ctx->pc = 0x1DD40D4u;
    SET_GPR_U32(ctx, 31, 0x1DD40DCu);
    ctx->pc = 0x1DD3D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD3D58u, 0x1DD40D4u, 0x1DD40DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD40DCu;
label_1dd40dc:
    // 0x1dd40dc: 0x8f8e8014  lw          $t6, -0x7FEC($gp)
    ctx->pc = 0x1dd40dcu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
label_1dd40e0:
    // 0x1dd40e0: 0x95cf056e  lhu         $t7, 0x56E($t6)
    ctx->pc = 0x1dd40e0u;
    SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 1390)));
    // 0x1dd40e4: 0x35ef0010  ori         $t7, $t7, 0x10
    ctx->pc = 0x1dd40e4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)16);
    // 0x1dd40e8: 0xa5cf056e  sh          $t7, 0x56E($t6)
    ctx->pc = 0x1dd40e8u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 1390), (uint16_t)GPR_U32(ctx, 15));
    // 0x1dd40ec: 0x8f848014  lw          $a0, -0x7FEC($gp)
    ctx->pc = 0x1dd40ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
label_1dd40f0:
    // 0x1dd40f0: 0x2405f6d5  addiu       $a1, $zero, -0x92B
    ctx->pc = 0x1dd40f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294964949));
    // 0x1dd40f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dd40f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd40f8: 0x2406270f  addiu       $a2, $zero, 0x270F
    ctx->pc = 0x1dd40f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
    // 0x1dd40fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1dd40fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dd4100: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1dd4100u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1dd4104: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1dd4104u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dd4108: 0x2408fffe  addiu       $t0, $zero, -0x2
    ctx->pc = 0x1dd4108u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1dd410c: 0x8774f58  j           func_1DD3D60
    ctx->pc = 0x1DD410Cu;
    ctx->pc = 0x1DD4110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD410Cu;
    // 0x1dd4110: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD3D60u;
    sub_01DD3D60_0x1dd3d60(rdram, ctx, runtime); return;
    ctx->pc = 0x1DD4114u;
    // 0x1dd4114: 0x0  nop
    ctx->pc = 0x1dd4114u;
    // NOP
    ctx->pc = 0x1dd4118u;
}
