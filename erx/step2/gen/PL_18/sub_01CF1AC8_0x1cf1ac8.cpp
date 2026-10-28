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

// Function: sub_01CF1AC8
// Address: 0x1cf1ac8 - 0x1cf1bf8
void sub_01CF1AC8_0x1cf1ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CF1AC8_0x1cf1ac8");
#endif

    switch (ctx->pc) {
        case 0x1cf1aecu: goto label_1cf1aec;
        case 0x1cf1afcu: goto label_1cf1afc;
        case 0x1cf1b08u: goto label_1cf1b08;
        case 0x1cf1b18u: goto label_1cf1b18;
        case 0x1cf1b34u: goto label_1cf1b34;
        case 0x1cf1b40u: goto label_1cf1b40;
        case 0x1cf1b80u: goto label_1cf1b80;
        case 0x1cf1b98u: goto label_1cf1b98;
        case 0x1cf1ba4u: goto label_1cf1ba4;
        case 0x1cf1bb4u: goto label_1cf1bb4;
        case 0x1cf1bc4u: goto label_1cf1bc4;
        case 0x1cf1bd0u: goto label_1cf1bd0;
        default: break;
    }

    ctx->pc = 0x1cf1ac8u;

    // 0x1cf1ac8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cf1ac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cf1acc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cf1accu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cf1ad0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cf1ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cf1ad4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cf1ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cf1ad8: 0xe7b40018  swc1        $f20, 0x18($sp)
    ctx->pc = 0x1cf1ad8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1cf1adc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cf1adcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf1ae0: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1cf1ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1cf1ae4: 0xc73bd58  jal         func_1CEF560
    ctx->pc = 0x1CF1AE4u;
    SET_GPR_U32(ctx, 31, 0x1CF1AECu);
    ctx->pc = 0x1CF1AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF1AE4u;
    // 0x1cf1ae8: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEF560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEF560u, 0x1CF1AE4u, 0x1CF1AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF1AECu;
label_1cf1aec:
    // 0x1cf1aec: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1cf1aecu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1cf1af0: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1cf1af0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1cf1af4: 0xc73c00e  jal         func_1CF0038
    ctx->pc = 0x1CF1AF4u;
    SET_GPR_U32(ctx, 31, 0x1CF1AFCu);
    ctx->pc = 0x1CF1AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF1AF4u;
    // 0x1cf1af8: 0x248400c0  addiu       $a0, $a0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF0038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF0038u, 0x1CF1AF4u, 0x1CF1AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF1AFCu;
label_1cf1afc:
    // 0x1cf1afc: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1cf1afcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1cf1b00: 0xc73bd58  jal         func_1CEF560
    ctx->pc = 0x1CF1B00u;
    SET_GPR_U32(ctx, 31, 0x1CF1B08u);
    ctx->pc = 0x1CF1B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF1B00u;
    // 0x1cf1b04: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEF560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEF560u, 0x1CF1B00u, 0x1CF1B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF1B08u;
label_1cf1b08:
    // 0x1cf1b08: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1cf1b08u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1cf1b0c: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1cf1b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1cf1b10: 0xc73c00e  jal         func_1CF0038
    ctx->pc = 0x1CF1B10u;
    SET_GPR_U32(ctx, 31, 0x1CF1B18u);
    ctx->pc = 0x1CF1B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF1B10u;
    // 0x1cf1b14: 0x24840300  addiu       $a0, $a0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF0038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF0038u, 0x1CF1B10u, 0x1CF1B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF1B18u;
label_1cf1b18:
    // 0x1cf1b18: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1cf1b18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1cf1b1c: 0x8e0e0010  lw          $t6, 0x10($s0)
    ctx->pc = 0x1cf1b1cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1cf1b20: 0x8c8f0064  lw          $t7, 0x64($a0)
    ctx->pc = 0x1cf1b20u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x1cf1b24: 0x15cf0004  bne         $t6, $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CF1B24u;
    {
        const bool branch_taken_0x1cf1b24 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        if (branch_taken_0x1cf1b24) {
            ctx->pc = 0x1CF1B38u;
            goto label_1cf1b38;
        }
    }
    ctx->pc = 0x1CF1B2Cu;
    // 0x1cf1b2c: 0xc73bff6  jal         func_1CEFFD8
    ctx->pc = 0x1CF1B2Cu;
    SET_GPR_U32(ctx, 31, 0x1CF1B34u);
    ctx->pc = 0x1CEFFD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEFFD8u, 0x1CF1B2Cu, 0x1CF1B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF1B34u;
label_1cf1b34:
    // 0x1cf1b34: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1cf1b34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1cf1b38:
    // 0x1cf1b38: 0xc73bd5a  jal         func_1CEF568
    ctx->pc = 0x1CF1B38u;
    SET_GPR_U32(ctx, 31, 0x1CF1B40u);
    ctx->pc = 0x1CF1B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF1B38u;
    // 0x1cf1b3c: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEF568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEF568u, 0x1CF1B38u, 0x1CF1B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF1B40u;
label_1cf1b40:
    // 0x1cf1b40: 0x8c4e0008  lw          $t6, 0x8($v0)
    ctx->pc = 0x1cf1b40u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1cf1b44: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1cf1b44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf1b48: 0x25cefff8  addiu       $t6, $t6, -0x8
    ctx->pc = 0x1cf1b48u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967288));
    // 0x1cf1b4c: 0x2dcf0016  sltiu       $t7, $t6, 0x16
    ctx->pc = 0x1cf1b4cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)(int64_t)(int32_t)22) ? 1 : 0);
    // 0x1cf1b50: 0x11e00029  beqz        $t7, . + 4 + (0x29 << 2)
    ctx->pc = 0x1CF1B50u;
    {
        const bool branch_taken_0x1cf1b50 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF1B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF1B50u;
        // 0x1cf1b54: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf1b50) {
            ctx->pc = 0x1CF1BF8u;
            return;
        }
    }
    ctx->pc = 0x1CF1B58u;
    // 0x1cf1b58: 0xe7880  sll         $t7, $t6, 2
    ctx->pc = 0x1cf1b58u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
    // 0x1cf1b5c: 0x3c0e01cf  lui         $t6, 0x1CF
    ctx->pc = 0x1cf1b5cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)463 << 16));
    // 0x1cf1b60: 0x25ce2fe8  addiu       $t6, $t6, 0x2FE8
    ctx->pc = 0x1cf1b60u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 12264));
    // 0x1cf1b64: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1cf1b64u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1cf1b68: 0x8ded0000  lw          $t5, 0x0($t7)
    ctx->pc = 0x1cf1b68u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1cf1b6c: 0x1a00008  jr          $t5
    ctx->pc = 0x1CF1B6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 13);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CF1B74u: goto label_1cf1b74;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CF1B6Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1CF1B74u;
label_1cf1b74:
    // 0x1cf1b74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cf1b74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf1b78: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cf1b78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf1b7c: 0x240601cc  addiu       $a2, $zero, 0x1CC
    ctx->pc = 0x1cf1b7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 460));
label_1cf1b80:
    // 0x1cf1b80: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cf1b80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cf1b84: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1cf1b84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1cf1b88: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cf1b88u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf1b8c: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1cf1b8cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cf1b90: 0xc73bd64  jal         func_1CEF590
    ctx->pc = 0x1CF1B90u;
    SET_GPR_U32(ctx, 31, 0x1CF1B98u);
    ctx->pc = 0x1CF1B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF1B90u;
    // 0x1cf1b94: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEF590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEF590u, 0x1CF1B90u, 0x1CF1B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF1B98u;
label_1cf1b98:
    // 0x1cf1b98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cf1b98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf1b9c: 0xc73bd5c  jal         func_1CEF570
    ctx->pc = 0x1CF1B9Cu;
    SET_GPR_U32(ctx, 31, 0x1CF1BA4u);
    ctx->pc = 0x1CF1BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF1B9Cu;
    // 0x1cf1ba0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEF570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEF570u, 0x1CF1B9Cu, 0x1CF1BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF1BA4u;
label_1cf1ba4:
    // 0x1cf1ba4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1cf1ba4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cf1ba8: 0x26240390  addiu       $a0, $s1, 0x390
    ctx->pc = 0x1cf1ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 912));
    // 0x1cf1bac: 0xc73bd5e  jal         func_1CEF578
    ctx->pc = 0x1CF1BACu;
    SET_GPR_U32(ctx, 31, 0x1CF1BB4u);
    ctx->pc = 0x1CF1BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF1BACu;
    // 0x1cf1bb0: 0x24050126  addiu       $a1, $zero, 0x126 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEF578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEF578u, 0x1CF1BACu, 0x1CF1BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF1BB4u;
label_1cf1bb4:
    // 0x1cf1bb4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1cf1bb4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1cf1bb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cf1bb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf1bbc: 0xc73bd52  jal         func_1CEF548
    ctx->pc = 0x1CF1BBCu;
    SET_GPR_U32(ctx, 31, 0x1CF1BC4u);
    ctx->pc = 0x1CF1BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF1BBCu;
    // 0x1cf1bc0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEF548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEF548u, 0x1CF1BBCu, 0x1CF1BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF1BC4u;
label_1cf1bc4:
    // 0x1cf1bc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cf1bc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf1bc8: 0xc73bd60  jal         func_1CEF580
    ctx->pc = 0x1CF1BC8u;
    SET_GPR_U32(ctx, 31, 0x1CF1BD0u);
    ctx->pc = 0x1CF1BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF1BC8u;
    // 0x1cf1bcc: 0x240500c2  addiu       $a1, $zero, 0xC2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 194));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEF580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEF580u, 0x1CF1BC8u, 0x1CF1BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF1BD0u;
label_1cf1bd0:
    // 0x1cf1bd0: 0xe614001c  swc1        $f20, 0x1C($s0)
    ctx->pc = 0x1cf1bd0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x1cf1bd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cf1bd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf1bd8: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1cf1bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x1cf1bdc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cf1bdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf1be0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cf1be0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cf1be4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cf1be4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cf1be8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cf1be8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cf1bec: 0xc7b40018  lwc1        $f20, 0x18($sp)
    ctx->pc = 0x1cf1becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1cf1bf0: 0x873bd6c  j           func_1CEF5B0
    ctx->pc = 0x1CF1BF0u;
    ctx->pc = 0x1CF1BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF1BF0u;
    // 0x1cf1bf4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEF5B0u;
    sub_01CEF5B0_0x1cef5b0(rdram, ctx, runtime); return;
    ctx->pc = 0x1CF1BF8u;
}
