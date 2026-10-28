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

// Function: sub_01D0EC00
// Address: 0x1d0ec00 - 0x1d0ece0
void sub_01D0EC00_0x1d0ec00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D0EC00_0x1d0ec00");
#endif

    switch (ctx->pc) {
        case 0x1d0ec28u: goto label_1d0ec28;
        case 0x1d0ec38u: goto label_1d0ec38;
        case 0x1d0eca4u: goto label_1d0eca4;
        default: break;
    }

    ctx->pc = 0x1d0ec00u;

    // 0x1d0ec00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d0ec00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d0ec04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d0ec04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d0ec08: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d0ec08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d0ec0c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d0ec0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d0ec10: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d0ec10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0ec14: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1d0ec14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1d0ec18: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1d0ec18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0ec1c: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x1d0ec1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1d0ec20: 0xc742f56  jal         func_1D0BD58
    ctx->pc = 0x1D0EC20u;
    SET_GPR_U32(ctx, 31, 0x1D0EC28u);
    ctx->pc = 0x1D0EC24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0EC20u;
    // 0x1d0ec24: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD58u, 0x1D0EC20u, 0x1D0EC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0EC28u;
label_1d0ec28:
    // 0x1d0ec28: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d0ec28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d0ec2c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d0ec2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0ec30: 0xc742f58  jal         func_1D0BD60
    ctx->pc = 0x1D0EC30u;
    SET_GPR_U32(ctx, 31, 0x1D0EC38u);
    ctx->pc = 0x1D0EC34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0EC30u;
    // 0x1d0ec34: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD60u, 0x1D0EC30u, 0x1D0EC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0EC38u;
label_1d0ec38:
    // 0x1d0ec38: 0x262e0200  addiu       $t6, $s1, 0x200
    ctx->pc = 0x1d0ec38u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 17), 512));
    // 0x1d0ec3c: 0x8c4c024c  lw          $t4, 0x24C($v0)
    ctx->pc = 0x1d0ec3cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1d0ec40: 0x8dcd0048  lw          $t5, 0x48($t6)
    ctx->pc = 0x1d0ec40u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 72)));
    // 0x1d0ec44: 0x340f9180  ori         $t7, $zero, 0x9180
    ctx->pc = 0x1d0ec44u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37248);
    // 0x1d0ec48: 0x8dca004c  lw          $t2, 0x4C($t6)
    ctx->pc = 0x1d0ec48u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 76)));
    // 0x1d0ec4c: 0x1af6821  addu        $t5, $t5, $t7
    ctx->pc = 0x1d0ec4cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 15)));
    // 0x1d0ec50: 0x8dab0010  lw          $t3, 0x10($t5)
    ctx->pc = 0x1d0ec50u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 16)));
    // 0x1d0ec54: 0x8d8e0084  lw          $t6, 0x84($t4)
    ctx->pc = 0x1d0ec54u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 132)));
    // 0x1d0ec58: 0x8d4f0084  lw          $t7, 0x84($t2)
    ctx->pc = 0x1d0ec58u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 132)));
    // 0x1d0ec5c: 0x8dac0050  lw          $t4, 0x50($t5)
    ctx->pc = 0x1d0ec5cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 80)));
    // 0x1d0ec60: 0x25ce0110  addiu       $t6, $t6, 0x110
    ctx->pc = 0x1d0ec60u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 272));
    // 0x1d0ec64: 0x25ef3da0  addiu       $t7, $t7, 0x3DA0
    ctx->pc = 0x1d0ec64u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 15776));
    // 0x1d0ec68: 0xae4b0604  sw          $t3, 0x604($s2)
    ctx->pc = 0x1d0ec68u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1540), GPR_U32(ctx, 11));
    // 0x1d0ec6c: 0xae4f0618  sw          $t7, 0x618($s2)
    ctx->pc = 0x1d0ec6cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1560), GPR_U32(ctx, 15));
    // 0x1d0ec70: 0xae4c0600  sw          $t4, 0x600($s2)
    ctx->pc = 0x1d0ec70u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1536), GPR_U32(ctx, 12));
    // 0x1d0ec74: 0xae4e061c  sw          $t6, 0x61C($s2)
    ctx->pc = 0x1d0ec74u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1564), GPR_U32(ctx, 14));
    // 0x1d0ec78: 0x240f0156  addiu       $t7, $zero, 0x156
    ctx->pc = 0x1d0ec78u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 342));
    // 0x1d0ec7c: 0x8e2d03a4  lw          $t5, 0x3A4($s1)
    ctx->pc = 0x1d0ec7cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 932)));
    // 0x1d0ec80: 0x15af000f  bne         $t5, $t7, . + 4 + (0xF << 2)
    ctx->pc = 0x1D0EC80u;
    {
        const bool branch_taken_0x1d0ec80 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D0EC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0EC80u;
        // 0x1d0ec84: 0x240f3c00  addiu       $t7, $zero, 0x3C00 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 15360));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0ec80) {
            ctx->pc = 0x1D0ECC0u;
            goto label_1d0ecc0;
        }
    }
    ctx->pc = 0x1D0EC88u;
    // 0x1d0ec88: 0x240f2000  addiu       $t7, $zero, 0x2000
    ctx->pc = 0x1d0ec88u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x1d0ec8c: 0x240e000b  addiu       $t6, $zero, 0xB
    ctx->pc = 0x1d0ec8cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1d0ec90: 0xae4f0614  sw          $t7, 0x614($s2)
    ctx->pc = 0x1d0ec90u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1556), GPR_U32(ctx, 15));
    // 0x1d0ec94: 0xae4e0608  sw          $t6, 0x608($s2)
    ctx->pc = 0x1d0ec94u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1544), GPR_U32(ctx, 14));
    // 0x1d0ec98: 0x240f0004  addiu       $t7, $zero, 0x4
    ctx->pc = 0x1d0ec98u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d0ec9c: 0xae4f060c  sw          $t7, 0x60C($s2)
    ctx->pc = 0x1d0ec9cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1548), GPR_U32(ctx, 15));
    // 0x1d0eca0: 0x240e0020  addiu       $t6, $zero, 0x20
    ctx->pc = 0x1d0eca0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1d0eca4:
    // 0x1d0eca4: 0xae4e0610  sw          $t6, 0x610($s2)
    ctx->pc = 0x1d0eca4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1552), GPR_U32(ctx, 14));
    // 0x1d0eca8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d0eca8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d0ecac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d0ecacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d0ecb0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d0ecb0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d0ecb4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1d0ecb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d0ecb8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0ECB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0ECBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0ECB8u;
        // 0x1d0ecbc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0ECB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0ECC0u;
label_1d0ecc0:
    // 0x1d0ecc0: 0x240e0058  addiu       $t6, $zero, 0x58
    ctx->pc = 0x1d0ecc0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x1d0ecc4: 0xae4f0614  sw          $t7, 0x614($s2)
    ctx->pc = 0x1d0ecc4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1556), GPR_U32(ctx, 15));
    // 0x1d0ecc8: 0xae4e0608  sw          $t6, 0x608($s2)
    ctx->pc = 0x1d0ecc8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1544), GPR_U32(ctx, 14));
    // 0x1d0eccc: 0x240f0014  addiu       $t7, $zero, 0x14
    ctx->pc = 0x1d0ecccu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1d0ecd0: 0xae4f060c  sw          $t7, 0x60C($s2)
    ctx->pc = 0x1d0ecd0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1548), GPR_U32(ctx, 15));
    // 0x1d0ecd4: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x1D0ECD4u;
    {
        const bool branch_taken_0x1d0ecd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0ECD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0ECD4u;
        // 0x1d0ecd8: 0x240e000c  addiu       $t6, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0ecd4) {
            ctx->pc = 0x1D0ECA4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d0eca4;
        }
    }
    ctx->pc = 0x1D0ECDCu;
    // 0x1d0ecdc: 0x0  nop
    ctx->pc = 0x1d0ecdcu;
    // NOP
    ctx->pc = 0x1d0ece0u;
}
