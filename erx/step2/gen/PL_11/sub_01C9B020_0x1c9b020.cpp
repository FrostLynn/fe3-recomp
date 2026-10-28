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

// Function: sub_01C9B020
// Address: 0x1c9b020 - 0x1c9b198
void sub_01C9B020_0x1c9b020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C9B020_0x1c9b020");
#endif

    switch (ctx->pc) {
        case 0x1c9b03cu: goto label_1c9b03c;
        case 0x1c9b04cu: goto label_1c9b04c;
        case 0x1c9b058u: goto label_1c9b058;
        case 0x1c9b068u: goto label_1c9b068;
        case 0x1c9b078u: goto label_1c9b078;
        case 0x1c9b080u: goto label_1c9b080;
        case 0x1c9b094u: goto label_1c9b094;
        case 0x1c9b09cu: goto label_1c9b09c;
        case 0x1c9b0a0u: goto label_1c9b0a0;
        case 0x1c9b0d8u: goto label_1c9b0d8;
        case 0x1c9b0e8u: goto label_1c9b0e8;
        case 0x1c9b0f4u: goto label_1c9b0f4;
        case 0x1c9b104u: goto label_1c9b104;
        case 0x1c9b110u: goto label_1c9b110;
        case 0x1c9b13cu: goto label_1c9b13c;
        case 0x1c9b14cu: goto label_1c9b14c;
        case 0x1c9b15cu: goto label_1c9b15c;
        case 0x1c9b16cu: goto label_1c9b16c;
        case 0x1c9b178u: goto label_1c9b178;
        default: break;
    }

    ctx->pc = 0x1c9b020u;

    // 0x1c9b020: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c9b020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c9b024: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c9b024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c9b028: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c9b028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c9b02c: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c9b02cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c9b030: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c9b030u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9b034: 0xc7262d6  jal         func_1C98B58
    ctx->pc = 0x1C9B034u;
    SET_GPR_U32(ctx, 31, 0x1C9B03Cu);
    ctx->pc = 0x1C9B038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9B034u;
    // 0x1c9b038: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B58u, 0x1C9B034u, 0x1C9B03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9B03Cu;
label_1c9b03c:
    // 0x1c9b03c: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1c9b03cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1c9b040: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1c9b040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1c9b044: 0xc726588  jal         func_1C99620
    ctx->pc = 0x1C9B044u;
    SET_GPR_U32(ctx, 31, 0x1C9B04Cu);
    ctx->pc = 0x1C9B048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9B044u;
    // 0x1c9b048: 0x248400c0  addiu       $a0, $a0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C99620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C99620u, 0x1C9B044u, 0x1C9B04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9B04Cu;
label_1c9b04c:
    // 0x1c9b04c: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1c9b04cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c9b050: 0xc7262d6  jal         func_1C98B58
    ctx->pc = 0x1C9B050u;
    SET_GPR_U32(ctx, 31, 0x1C9B058u);
    ctx->pc = 0x1C9B054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9B050u;
    // 0x1c9b054: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B58u, 0x1C9B050u, 0x1C9B058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9B058u;
label_1c9b058:
    // 0x1c9b058: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1c9b058u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1c9b05c: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1c9b05cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1c9b060: 0xc726588  jal         func_1C99620
    ctx->pc = 0x1C9B060u;
    SET_GPR_U32(ctx, 31, 0x1C9B068u);
    ctx->pc = 0x1C9B064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9B060u;
    // 0x1c9b064: 0x24840300  addiu       $a0, $a0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C99620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C99620u, 0x1C9B060u, 0x1C9B068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9B068u;
label_1c9b068:
    // 0x1c9b068: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c9b068u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c9b06c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c9b06cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9b070: 0xc7262d0  jal         func_1C98B40
    ctx->pc = 0x1C9B070u;
    SET_GPR_U32(ctx, 31, 0x1C9B078u);
    ctx->pc = 0x1C9B074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9B070u;
    // 0x1c9b074: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B40u, 0x1C9B070u, 0x1C9B078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9B078u;
label_1c9b078:
    // 0x1c9b078: 0xc7262d2  jal         func_1C98B48
    ctx->pc = 0x1C9B078u;
    SET_GPR_U32(ctx, 31, 0x1C9B080u);
    ctx->pc = 0x1C9B07Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9B078u;
    // 0x1c9b07c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B48u, 0x1C9B078u, 0x1C9B080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9B080u;
label_1c9b080:
    // 0x1c9b080: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c9b080u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9b084: 0x144f000a  bne         $v0, $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x1C9B084u;
    {
        const bool branch_taken_0x1c9b084 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C9B088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9B084u;
        // 0x1c9b088: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9b084) {
            ctx->pc = 0x1C9B0B0u;
            goto label_1c9b0b0;
        }
    }
    ctx->pc = 0x1C9B08Cu;
    // 0x1c9b08c: 0xc7262ec  jal         func_1C98BB0
    ctx->pc = 0x1C9B08Cu;
    SET_GPR_U32(ctx, 31, 0x1C9B094u);
    ctx->pc = 0x1C98BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98BB0u, 0x1C9B08Cu, 0x1C9B094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9B094u;
label_1c9b094:
    // 0x1c9b094: 0xc7262d4  jal         func_1C98B50
    ctx->pc = 0x1C9B094u;
    SET_GPR_U32(ctx, 31, 0x1C9B09Cu);
    ctx->pc = 0x1C9B098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9B094u;
    // 0x1c9b098: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B50u, 0x1C9B094u, 0x1C9B09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9B09Cu;
label_1c9b09c:
    // 0x1c9b09c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c9b09cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1c9b0a0:
    // 0x1c9b0a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c9b0a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c9b0a4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c9b0a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c9b0a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C9B0A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9B0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9B0A8u;
        // 0x1c9b0ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C9B0A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C9B0B0u;
label_1c9b0b0:
    // 0x1c9b0b0: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1C9B0B0u;
    {
        const bool branch_taken_0x1c9b0b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9B0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9B0B0u;
        // 0x1c9b0b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9b0b0) {
            ctx->pc = 0x1C9B0A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c9b0a0;
        }
    }
    ctx->pc = 0x1C9B0B8u;
    // 0x1c9b0b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c9b0b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c9b0bc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c9b0bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c9b0c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c9b0c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c9b0c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c9b0c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c9b0c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c9b0c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9b0cc: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c9b0ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c9b0d0: 0xc7262d6  jal         func_1C98B58
    ctx->pc = 0x1C9B0D0u;
    SET_GPR_U32(ctx, 31, 0x1C9B0D8u);
    ctx->pc = 0x1C9B0D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9B0D0u;
    // 0x1c9b0d4: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B58u, 0x1C9B0D0u, 0x1C9B0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9B0D8u;
label_1c9b0d8:
    // 0x1c9b0d8: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1c9b0d8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1c9b0dc: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1c9b0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1c9b0e0: 0xc726588  jal         func_1C99620
    ctx->pc = 0x1C9B0E0u;
    SET_GPR_U32(ctx, 31, 0x1C9B0E8u);
    ctx->pc = 0x1C9B0E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9B0E0u;
    // 0x1c9b0e4: 0x248400c0  addiu       $a0, $a0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C99620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C99620u, 0x1C9B0E0u, 0x1C9B0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9B0E8u;
label_1c9b0e8:
    // 0x1c9b0e8: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1c9b0e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c9b0ec: 0xc7262d6  jal         func_1C98B58
    ctx->pc = 0x1C9B0ECu;
    SET_GPR_U32(ctx, 31, 0x1C9B0F4u);
    ctx->pc = 0x1C9B0F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9B0ECu;
    // 0x1c9b0f0: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B58u, 0x1C9B0ECu, 0x1C9B0F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9B0F4u;
label_1c9b0f4:
    // 0x1c9b0f4: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1c9b0f4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1c9b0f8: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1c9b0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1c9b0fc: 0xc726588  jal         func_1C99620
    ctx->pc = 0x1C9B0FCu;
    SET_GPR_U32(ctx, 31, 0x1C9B104u);
    ctx->pc = 0x1C9B100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9B0FCu;
    // 0x1c9b100: 0x24840300  addiu       $a0, $a0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C99620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C99620u, 0x1C9B0FCu, 0x1C9B104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9B104u;
label_1c9b104:
    // 0x1c9b104: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c9b104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c9b108: 0xc7262d8  jal         func_1C98B60
    ctx->pc = 0x1C9B108u;
    SET_GPR_U32(ctx, 31, 0x1C9B110u);
    ctx->pc = 0x1C9B10Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9B108u;
    // 0x1c9b10c: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B60u, 0x1C9B108u, 0x1C9B110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9B110u;
label_1c9b110:
    // 0x1c9b110: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1c9b110u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1c9b114: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c9b114u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9b118: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1c9b118u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x1c9b11c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c9b11cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9b120: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c9b120u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9b124: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1c9b124u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c9b128: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c9b128u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9b12c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c9b12cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c9b130: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c9b130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9b134: 0xc7262e2  jal         func_1C98B88
    ctx->pc = 0x1C9B134u;
    SET_GPR_U32(ctx, 31, 0x1C9B13Cu);
    ctx->pc = 0x1C9B138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9B134u;
    // 0x1c9b138: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B88u, 0x1C9B134u, 0x1C9B13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9B13Cu;
label_1c9b13c:
    // 0x1c9b13c: 0x26310390  addiu       $s1, $s1, 0x390
    ctx->pc = 0x1c9b13cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 912));
    // 0x1c9b140: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c9b140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9b144: 0xc7262da  jal         func_1C98B68
    ctx->pc = 0x1C9B144u;
    SET_GPR_U32(ctx, 31, 0x1C9B14Cu);
    ctx->pc = 0x1C9B148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9B144u;
    // 0x1c9b148: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B68u, 0x1C9B144u, 0x1C9B14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9B14Cu;
label_1c9b14c:
    // 0x1c9b14c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1c9b14cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c9b150: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c9b150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9b154: 0xc7262dc  jal         func_1C98B70
    ctx->pc = 0x1C9B154u;
    SET_GPR_U32(ctx, 31, 0x1C9B15Cu);
    ctx->pc = 0x1C9B158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9B154u;
    // 0x1c9b158: 0x24050128  addiu       $a1, $zero, 0x128 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B70u, 0x1C9B154u, 0x1C9B15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9B15Cu;
label_1c9b15c:
    // 0x1c9b15c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c9b15cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c9b160: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c9b160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9b164: 0xc7262d0  jal         func_1C98B40
    ctx->pc = 0x1C9B164u;
    SET_GPR_U32(ctx, 31, 0x1C9B16Cu);
    ctx->pc = 0x1C9B168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9B164u;
    // 0x1c9b168: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B40u, 0x1C9B164u, 0x1C9B16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9B16Cu;
label_1c9b16c:
    // 0x1c9b16c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c9b16cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9b170: 0xc7262de  jal         func_1C98B78
    ctx->pc = 0x1C9B170u;
    SET_GPR_U32(ctx, 31, 0x1C9B178u);
    ctx->pc = 0x1C9B174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9B170u;
    // 0x1c9b174: 0x240500c3  addiu       $a1, $zero, 0xC3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 195));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B78u, 0x1C9B170u, 0x1C9B178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9B178u;
label_1c9b178:
    // 0x1c9b178: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c9b178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9b17c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c9b17cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c9b180: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c9b180u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c9b184: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c9b184u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9b188: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c9b188u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c9b18c: 0x87262ea  j           func_1C98BA8
    ctx->pc = 0x1C9B18Cu;
    ctx->pc = 0x1C9B190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9B18Cu;
    // 0x1c9b190: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98BA8u;
    sub_01C98BA8_0x1c98ba8(rdram, ctx, runtime); return;
    ctx->pc = 0x1C9B194u;
    // 0x1c9b194: 0x0  nop
    ctx->pc = 0x1c9b194u;
    // NOP
    ctx->pc = 0x1c9b198u;
}
