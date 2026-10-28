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

// Function: sub_01DDEF80
// Address: 0x1ddef80 - 0x1ddf030
void sub_01DDEF80_0x1ddef80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DDEF80_0x1ddef80");
#endif

    switch (ctx->pc) {
        case 0x1ddefa4u: goto label_1ddefa4;
        case 0x1ddefb8u: goto label_1ddefb8;
        default: break;
    }

    ctx->pc = 0x1ddef80u;

    // 0x1ddef80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ddef80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ddef84: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1ddef84u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1ddef88: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ddef88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ddef8c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ddef8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ddef90: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ddef90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ddef94: 0x8de400e0  lw          $a0, 0xE0($t7)
    ctx->pc = 0x1ddef94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    // 0x1ddef98: 0x8c90000c  lw          $s0, 0xC($a0)
    ctx->pc = 0x1ddef98u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1ddef9c: 0xc777bc6  jal         func_1DDEF18
    ctx->pc = 0x1DDEF9Cu;
    SET_GPR_U32(ctx, 31, 0x1DDEFA4u);
    ctx->pc = 0x1DDEFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDEF9Cu;
    // 0x1ddefa0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DDEF18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DDEF18u, 0x1DDEF9Cu, 0x1DDEFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDEFA4u;
label_1ddefa4:
    // 0x1ddefa4: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1ddefa4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1ddefa8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1ddefa8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddefac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ddefacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddefb0: 0xc777bca  jal         func_1DDEF28
    ctx->pc = 0x1DDEFB0u;
    SET_GPR_U32(ctx, 31, 0x1DDEFB8u);
    ctx->pc = 0x1DDEFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDEFB0u;
    // 0x1ddefb4: 0x8de400e0  lw          $a0, 0xE0($t7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DDEF28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DDEF28u, 0x1DDEFB0u, 0x1DDEFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDEFB8u;
label_1ddefb8:
    // 0x1ddefb8: 0x8e2e03a4  lw          $t6, 0x3A4($s1)
    ctx->pc = 0x1ddefb8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 932)));
    // 0x1ddefbc: 0x240f015b  addiu       $t7, $zero, 0x15B
    ctx->pc = 0x1ddefbcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 347));
    // 0x1ddefc0: 0x55cf0009  bnel        $t6, $t7, . + 4 + (0x9 << 2)
    ctx->pc = 0x1DDEFC0u;
    {
        const bool branch_taken_0x1ddefc0 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        if (branch_taken_0x1ddefc0) {
            ctx->pc = 0x1DDEFC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DDEFC0u;
            // 0x1ddefc4: 0x8c4e024c  lw          $t6, 0x24C($v0) (Delay Slot)
            SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DDEFE8u;
            goto label_1ddefe8;
        }
    }
    ctx->pc = 0x1DDEFC8u;
    // 0x1ddefc8: 0x8f8d8014  lw          $t5, -0x7FEC($gp)
    ctx->pc = 0x1ddefc8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1ddefcc: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1ddefccu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ddefd0: 0x95ae056e  lhu         $t6, 0x56E($t5)
    ctx->pc = 0x1ddefd0u;
    SET_GPR_ZE32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 1390)));
    // 0x1ddefd4: 0x8dac00dc  lw          $t4, 0xDC($t5)
    ctx->pc = 0x1ddefd4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 220)));
    // 0x1ddefd8: 0x35ce0008  ori         $t6, $t6, 0x8
    ctx->pc = 0x1ddefd8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)8);
    // 0x1ddefdc: 0xad8f0cd8  sw          $t7, 0xCD8($t4)
    ctx->pc = 0x1ddefdcu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 3288), GPR_U32(ctx, 15));
    // 0x1ddefe0: 0xa5ae056e  sh          $t6, 0x56E($t5)
    ctx->pc = 0x1ddefe0u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 1390), (uint16_t)GPR_U32(ctx, 14));
    // 0x1ddefe4: 0x8c4e024c  lw          $t6, 0x24C($v0)
    ctx->pc = 0x1ddefe4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
label_1ddefe8:
    // 0x1ddefe8: 0x340d8000  ori         $t5, $zero, 0x8000
    ctx->pc = 0x1ddefe8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1ddefec: 0x8dcf0084  lw          $t7, 0x84($t6)
    ctx->pc = 0x1ddefecu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 132)));
    // 0x1ddeff0: 0x1ed7821  addu        $t7, $t7, $t5
    ctx->pc = 0x1ddeff0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 13)));
    // 0x1ddeff4: 0x91ee00a6  lbu         $t6, 0xA6($t7)
    ctx->pc = 0x1ddeff4u;
    SET_GPR_ZE32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 166)));
    // 0x1ddeff8: 0x15c00008  bnez        $t6, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DDEFF8u;
    {
        const bool branch_taken_0x1ddeff8 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DDEFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDEFF8u;
        // 0x1ddeffc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddeff8) {
            ctx->pc = 0x1DDF01Cu;
            goto label_1ddf01c;
        }
    }
    ctx->pc = 0x1DDF000u;
    // 0x1ddf000: 0x8f8d8014  lw          $t5, -0x7FEC($gp)
    ctx->pc = 0x1ddf000u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1ddf004: 0x240f0002  addiu       $t7, $zero, 0x2
    ctx->pc = 0x1ddf004u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ddf008: 0x95ae056e  lhu         $t6, 0x56E($t5)
    ctx->pc = 0x1ddf008u;
    SET_GPR_ZE32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 1390)));
    // 0x1ddf00c: 0x8dac00dc  lw          $t4, 0xDC($t5)
    ctx->pc = 0x1ddf00cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 220)));
    // 0x1ddf010: 0x35ce0010  ori         $t6, $t6, 0x10
    ctx->pc = 0x1ddf010u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)16);
    // 0x1ddf014: 0xad8f0cd8  sw          $t7, 0xCD8($t4)
    ctx->pc = 0x1ddf014u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 3288), GPR_U32(ctx, 15));
    // 0x1ddf018: 0xa5ae056e  sh          $t6, 0x56E($t5)
    ctx->pc = 0x1ddf018u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 1390), (uint16_t)GPR_U32(ctx, 14));
label_1ddf01c:
    // 0x1ddf01c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ddf01cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ddf020: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ddf020u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ddf024: 0x3e00008  jr          $ra
    ctx->pc = 0x1DDF024u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DDF028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDF024u;
        // 0x1ddf028: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DDF024u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DDF02Cu;
    // 0x1ddf02c: 0x0  nop
    ctx->pc = 0x1ddf02cu;
    // NOP
    ctx->pc = 0x1ddf030u;
}
