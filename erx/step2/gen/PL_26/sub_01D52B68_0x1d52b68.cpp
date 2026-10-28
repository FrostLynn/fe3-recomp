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

// Function: sub_01D52B68
// Address: 0x1d52b68 - 0x1d52c70
void sub_01D52B68_0x1d52b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D52B68_0x1d52b68");
#endif

    switch (ctx->pc) {
        case 0x1d52b84u: goto label_1d52b84;
        case 0x1d52b8cu: goto label_1d52b8c;
        case 0x1d52ba0u: goto label_1d52ba0;
        case 0x1d52ba8u: goto label_1d52ba8;
        case 0x1d52bacu: goto label_1d52bac;
        case 0x1d52be8u: goto label_1d52be8;
        case 0x1d52c14u: goto label_1d52c14;
        case 0x1d52c20u: goto label_1d52c20;
        case 0x1d52c2cu: goto label_1d52c2c;
        case 0x1d52c40u: goto label_1d52c40;
        case 0x1d52c50u: goto label_1d52c50;
        default: break;
    }

    ctx->pc = 0x1d52b68u;

    // 0x1d52b68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d52b68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d52b6c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d52b6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d52b70: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d52b70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d52b74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d52b74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d52b78: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d52b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d52b7c: 0xc7543d0  jal         func_1D50F40
    ctx->pc = 0x1D52B7Cu;
    SET_GPR_U32(ctx, 31, 0x1D52B84u);
    ctx->pc = 0x1D52B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D52B7Cu;
    // 0x1d52b80: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D50F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D50F40u, 0x1D52B7Cu, 0x1D52B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D52B84u;
label_1d52b84:
    // 0x1d52b84: 0xc7543d2  jal         func_1D50F48
    ctx->pc = 0x1D52B84u;
    SET_GPR_U32(ctx, 31, 0x1D52B8Cu);
    ctx->pc = 0x1D52B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D52B84u;
    // 0x1d52b88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D50F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D50F48u, 0x1D52B84u, 0x1D52B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D52B8Cu;
label_1d52b8c:
    // 0x1d52b8c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d52b8cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d52b90: 0x144f000a  bne         $v0, $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x1D52B90u;
    {
        const bool branch_taken_0x1d52b90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D52B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D52B90u;
        // 0x1d52b94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d52b90) {
            ctx->pc = 0x1D52BBCu;
            goto label_1d52bbc;
        }
    }
    ctx->pc = 0x1D52B98u;
    // 0x1d52b98: 0xc7543ec  jal         func_1D50FB0
    ctx->pc = 0x1D52B98u;
    SET_GPR_U32(ctx, 31, 0x1D52BA0u);
    ctx->pc = 0x1D50FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D50FB0u, 0x1D52B98u, 0x1D52BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D52BA0u;
label_1d52ba0:
    // 0x1d52ba0: 0xc7543d4  jal         func_1D50F50
    ctx->pc = 0x1D52BA0u;
    SET_GPR_U32(ctx, 31, 0x1D52BA8u);
    ctx->pc = 0x1D52BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D52BA0u;
    // 0x1d52ba4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D50F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D50F50u, 0x1D52BA0u, 0x1D52BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D52BA8u;
label_1d52ba8:
    // 0x1d52ba8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d52ba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1d52bac:
    // 0x1d52bac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d52bacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d52bb0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d52bb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d52bb4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D52BB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D52BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D52BB4u;
        // 0x1d52bb8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D52BB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D52BBCu;
label_1d52bbc:
    // 0x1d52bbc: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D52BBCu;
    {
        const bool branch_taken_0x1d52bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D52BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D52BBCu;
        // 0x1d52bc0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d52bbc) {
            ctx->pc = 0x1D52BACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d52bac;
        }
    }
    ctx->pc = 0x1D52BC4u;
    // 0x1d52bc4: 0x0  nop
    ctx->pc = 0x1d52bc4u;
    // NOP
    // 0x1d52bc8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d52bc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d52bcc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d52bccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d52bd0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d52bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d52bd4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d52bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d52bd8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d52bd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d52bdc: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d52bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d52be0: 0xc7543d8  jal         func_1D50F60
    ctx->pc = 0x1D52BE0u;
    SET_GPR_U32(ctx, 31, 0x1D52BE8u);
    ctx->pc = 0x1D52BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D52BE0u;
    // 0x1d52be4: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D50F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D50F60u, 0x1D52BE0u, 0x1D52BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D52BE8u;
label_1d52be8:
    // 0x1d52be8: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1d52be8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1d52bec: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d52becu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d52bf0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d52bf0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d52bf4: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1d52bf4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d52bf8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d52bf8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d52bfc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d52bfcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d52c00: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d52c00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d52c04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d52c04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d52c08: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d52c08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d52c0c: 0xc7543e2  jal         func_1D50F88
    ctx->pc = 0x1D52C0Cu;
    SET_GPR_U32(ctx, 31, 0x1D52C14u);
    ctx->pc = 0x1D52C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D52C0Cu;
    // 0x1d52c10: 0x26310390  addiu       $s1, $s1, 0x390 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D50F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D50F88u, 0x1D52C0Cu, 0x1D52C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D52C14u;
label_1d52c14:
    // 0x1d52c14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d52c14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d52c18: 0xc7543da  jal         func_1D50F68
    ctx->pc = 0x1D52C18u;
    SET_GPR_U32(ctx, 31, 0x1D52C20u);
    ctx->pc = 0x1D52C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D52C18u;
    // 0x1d52c1c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D50F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D50F68u, 0x1D52C18u, 0x1D52C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D52C20u;
label_1d52c20:
    // 0x1d52c20: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d52c20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d52c24: 0xc7543d6  jal         func_1D50F58
    ctx->pc = 0x1D52C24u;
    SET_GPR_U32(ctx, 31, 0x1D52C2Cu);
    ctx->pc = 0x1D52C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D52C24u;
    // 0x1d52c28: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D50F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D50F58u, 0x1D52C24u, 0x1D52C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D52C2Cu;
label_1d52c2c:
    // 0x1d52c2c: 0xac400430  sw          $zero, 0x430($v0)
    ctx->pc = 0x1d52c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1072), GPR_U32(ctx, 0));
    // 0x1d52c30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d52c30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d52c34: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1d52c34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d52c38: 0xc7543dc  jal         func_1D50F70
    ctx->pc = 0x1D52C38u;
    SET_GPR_U32(ctx, 31, 0x1D52C40u);
    ctx->pc = 0x1D52C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D52C38u;
    // 0x1d52c3c: 0x240500f5  addiu       $a1, $zero, 0xF5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 245));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D50F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D50F70u, 0x1D52C38u, 0x1D52C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D52C40u;
label_1d52c40:
    // 0x1d52c40: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d52c40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d52c44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d52c44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d52c48: 0xc7543d0  jal         func_1D50F40
    ctx->pc = 0x1D52C48u;
    SET_GPR_U32(ctx, 31, 0x1D52C50u);
    ctx->pc = 0x1D52C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D52C48u;
    // 0x1d52c4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D50F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D50F40u, 0x1D52C48u, 0x1D52C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D52C50u;
label_1d52c50:
    // 0x1d52c50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d52c50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d52c54: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d52c54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d52c58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d52c58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d52c5c: 0x24050093  addiu       $a1, $zero, 0x93
    ctx->pc = 0x1d52c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 147));
    // 0x1d52c60: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d52c60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d52c64: 0x87543de  j           func_1D50F78
    ctx->pc = 0x1D52C64u;
    ctx->pc = 0x1D52C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D52C64u;
    // 0x1d52c68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D50F78u;
    sub_01D50F78_0x1d50f78(rdram, ctx, runtime); return;
    ctx->pc = 0x1D52C6Cu;
    // 0x1d52c6c: 0x0  nop
    ctx->pc = 0x1d52c6cu;
    // NOP
    ctx->pc = 0x1d52c70u;
}
