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

// Function: sub_01DD6D90
// Address: 0x1dd6d90 - 0x1dd7028
void sub_01DD6D90_0x1dd6d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DD6D90_0x1dd6d90");
#endif

    switch (ctx->pc) {
        case 0x1dd6df4u: goto label_1dd6df4;
        case 0x1dd6e28u: goto label_1dd6e28;
        case 0x1dd6e50u: goto label_1dd6e50;
        case 0x1dd6e64u: goto label_1dd6e64;
        case 0x1dd6e68u: goto label_1dd6e68;
        case 0x1dd6e78u: goto label_1dd6e78;
        case 0x1dd6eb8u: goto label_1dd6eb8;
        case 0x1dd6f10u: goto label_1dd6f10;
        case 0x1dd6f2cu: goto label_1dd6f2c;
        case 0x1dd6f70u: goto label_1dd6f70;
        case 0x1dd6fd0u: goto label_1dd6fd0;
        case 0x1dd6fecu: goto label_1dd6fec;
        case 0x1dd7000u: goto label_1dd7000;
        default: break;
    }

    ctx->pc = 0x1dd6d90u;

    // 0x1dd6d90: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1dd6d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1dd6d94: 0x3c0f01dd  lui         $t7, 0x1DD
    ctx->pc = 0x1dd6d94u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)477 << 16));
    // 0x1dd6d98: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1dd6d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1dd6d9c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1dd6d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1dd6da0: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1dd6da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1dd6da4: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1dd6da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x1dd6da8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1dd6da8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd6dac: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x1dd6dacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x1dd6db0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1dd6db0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd6db4: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x1dd6db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x1dd6db8: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x1dd6db8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x1dd6dbc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1dd6dbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1dd6dc0: 0x25f77614  addiu       $s7, $t7, 0x7614
    ctx->pc = 0x1dd6dc0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 15), 30228));
    // 0x1dd6dc4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1dd6dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1dd6dc8: 0x3c0f01de  lui         $t7, 0x1DE
    ctx->pc = 0x1dd6dc8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)478 << 16));
    // 0x1dd6dcc: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x1dd6dccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x1dd6dd0: 0x25f28200  addiu       $s2, $t7, -0x7E00
    ctx->pc = 0x1dd6dd0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 15), 4294935040));
    // 0x1dd6dd4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1dd6dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1dd6dd8: 0x26fe0014  addiu       $fp, $s7, 0x14
    ctx->pc = 0x1dd6dd8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 23), 20));
    // 0x1dd6ddc: 0x8c8e024c  lw          $t6, 0x24C($a0)
    ctx->pc = 0x1dd6ddcu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 588)));
    // 0x1dd6de0: 0x8cad024c  lw          $t5, 0x24C($a1)
    ctx->pc = 0x1dd6de0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 588)));
    // 0x1dd6de4: 0x8dcc0084  lw          $t4, 0x84($t6)
    ctx->pc = 0x1dd6de4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 132)));
    // 0x1dd6de8: 0x8dab0084  lw          $t3, 0x84($t5)
    ctx->pc = 0x1dd6de8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 132)));
    // 0x1dd6dec: 0x25950110  addiu       $s5, $t4, 0x110
    ctx->pc = 0x1dd6decu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 12), 272));
    // 0x1dd6df0: 0x25760110  addiu       $s6, $t3, 0x110
    ctx->pc = 0x1dd6df0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 11), 272));
label_1dd6df4:
    // 0x1dd6df4: 0x8e4e0000  lw          $t6, 0x0($s2)
    ctx->pc = 0x1dd6df4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1dd6df8: 0x240f0004  addiu       $t7, $zero, 0x4
    ctx->pc = 0x1dd6df8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1dd6dfc: 0x11cf002a  beq         $t6, $t7, . + 4 + (0x2A << 2)
    ctx->pc = 0x1DD6DFCu;
    {
        const bool branch_taken_0x1dd6dfc = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x1DD6E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD6DFCu;
        // 0x1dd6e00: 0x240f002c  addiu       $t7, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd6dfc) {
            ctx->pc = 0x1DD6EA8u;
            goto label_1dd6ea8;
        }
    }
    ctx->pc = 0x1DD6E04u;
    // 0x1dd6e04: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x1dd6e04u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x1dd6e08: 0x26f7818  mult        $t7, $s3, $t7
    ctx->pc = 0x1dd6e08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x1dd6e0c: 0x8f848014  lw          $a0, -0x7FEC($gp)
    ctx->pc = 0x1dd6e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dd6e10: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1dd6e10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd6e14: 0x1fe8821  addu        $s1, $t7, $fp
    ctx->pc = 0x1dd6e14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 30)));
    // 0x1dd6e18: 0x1f78021  addu        $s0, $t7, $s7
    ctx->pc = 0x1dd6e18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 23)));
    // 0x1dd6e1c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1dd6e1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd6e20: 0xc775b1a  jal         func_1DD6C68
    ctx->pc = 0x1DD6E20u;
    SET_GPR_U32(ctx, 31, 0x1DD6E28u);
    ctx->pc = 0x1DD6E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD6E20u;
    // 0x1dd6e24: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD6C68u, 0x1DD6E20u, 0x1DD6E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD6E28u;
label_1dd6e28:
    // 0x1dd6e28: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DD6E28u;
    {
        const bool branch_taken_0x1dd6e28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD6E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD6E28u;
        // 0x1dd6e2c: 0x8f848014  lw          $a0, -0x7FEC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd6e28) {
            ctx->pc = 0x1DD6E40u;
            goto label_1dd6e40;
        }
    }
    ctx->pc = 0x1DD6E30u;
    // 0x1dd6e30: 0x8e4f0000  lw          $t7, 0x0($s2)
    ctx->pc = 0x1dd6e30u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1dd6e34: 0x35ef0001  ori         $t7, $t7, 0x1
    ctx->pc = 0x1dd6e34u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)1);
    // 0x1dd6e38: 0xae4f0000  sw          $t7, 0x0($s2)
    ctx->pc = 0x1dd6e38u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 15));
    // 0x1dd6e3c: 0x8f848014  lw          $a0, -0x7FEC($gp)
    ctx->pc = 0x1dd6e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
label_1dd6e40:
    // 0x1dd6e40: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1dd6e40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd6e44: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1dd6e44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd6e48: 0xc775b1a  jal         func_1DD6C68
    ctx->pc = 0x1DD6E48u;
    SET_GPR_U32(ctx, 31, 0x1DD6E50u);
    ctx->pc = 0x1DD6E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD6E48u;
    // 0x1dd6e4c: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD6C68u, 0x1DD6E48u, 0x1DD6E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD6E50u;
label_1dd6e50:
    // 0x1dd6e50: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DD6E50u;
    {
        const bool branch_taken_0x1dd6e50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd6e50) {
            ctx->pc = 0x1DD6E54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DD6E50u;
            // 0x1dd6e54: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DD6E68u;
            goto label_1dd6e68;
        }
    }
    ctx->pc = 0x1DD6E58u;
    // 0x1dd6e58: 0x8e4f0000  lw          $t7, 0x0($s2)
    ctx->pc = 0x1dd6e58u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1dd6e5c: 0x35ef0002  ori         $t7, $t7, 0x2
    ctx->pc = 0x1dd6e5cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)2);
    // 0x1dd6e60: 0xae4f0000  sw          $t7, 0x0($s2)
    ctx->pc = 0x1dd6e60u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 15));
label_1dd6e64:
    // 0x1dd6e64: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1dd6e64u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1dd6e68:
    // 0x1dd6e68: 0x2a6f000b  slti        $t7, $s3, 0xB
    ctx->pc = 0x1dd6e68u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x1dd6e6c: 0x15e0ffe1  bnez        $t7, . + 4 + (-0x1F << 2)
    ctx->pc = 0x1DD6E6Cu;
    {
        const bool branch_taken_0x1dd6e6c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DD6E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD6E6Cu;
        // 0x1dd6e70: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd6e6c) {
            ctx->pc = 0x1DD6DF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dd6df4;
        }
    }
    ctx->pc = 0x1DD6E74u;
    // 0x1dd6e74: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1dd6e74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dd6e78:
    // 0x1dd6e78: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1dd6e78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dd6e7c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1dd6e7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1dd6e80: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1dd6e80u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dd6e84: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1dd6e84u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1dd6e88: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1dd6e88u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dd6e8c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1dd6e8cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1dd6e90: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x1dd6e90u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1dd6e94: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x1dd6e94u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1dd6e98: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x1dd6e98u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1dd6e9c: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x1dd6e9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1dd6ea0: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD6EA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD6EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD6EA0u;
        // 0x1dd6ea4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD6EA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD6EA8u;
label_1dd6ea8:
    // 0x1dd6ea8: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1dd6ea8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dd6eac: 0x8de400dc  lw          $a0, 0xDC($t7)
    ctx->pc = 0x1dd6eacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 220)));
    // 0x1dd6eb0: 0xc775b14  jal         func_1DD6C50
    ctx->pc = 0x1DD6EB0u;
    SET_GPR_U32(ctx, 31, 0x1DD6EB8u);
    ctx->pc = 0x1DD6EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD6EB0u;
    // 0x1dd6eb4: 0x24840140  addiu       $a0, $a0, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD6C50u, 0x1DD6EB0u, 0x1DD6EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD6EB8u;
label_1dd6eb8:
    // 0x1dd6eb8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1dd6eb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1dd6ebc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1dd6ebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1dd6ec0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1dd6ec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1dd6ec4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1DD6EC4u;
    {
        const bool branch_taken_0x1dd6ec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DD6EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD6EC4u;
        // 0x1dd6ec8: 0x240f002c  addiu       $t7, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd6ec4) {
            ctx->pc = 0x1DD6EECu;
            goto label_1dd6eec;
        }
    }
    ctx->pc = 0x1DD6ECCu;
    // 0x1dd6ecc: 0x8faf0000  lw          $t7, 0x0($sp)
    ctx->pc = 0x1dd6eccu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd6ed0: 0x8dee03a4  lw          $t6, 0x3A4($t7)
    ctx->pc = 0x1dd6ed0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 932)));
    // 0x1dd6ed4: 0x240f003e  addiu       $t7, $zero, 0x3E
    ctx->pc = 0x1dd6ed4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x1dd6ed8: 0x11cf0003  beq         $t6, $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DD6ED8u;
    {
        const bool branch_taken_0x1dd6ed8 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x1DD6EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD6ED8u;
        // 0x1dd6edc: 0x240f004c  addiu       $t7, $zero, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd6ed8) {
            ctx->pc = 0x1DD6EE8u;
            goto label_1dd6ee8;
        }
    }
    ctx->pc = 0x1DD6EE0u;
    // 0x1dd6ee0: 0x15cf0018  bne         $t6, $t7, . + 4 + (0x18 << 2)
    ctx->pc = 0x1DD6EE0u;
    {
        const bool branch_taken_0x1dd6ee0 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x1DD6EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD6EE0u;
        // 0x1dd6ee4: 0x26900390  addiu       $s0, $s4, 0x390 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 912));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd6ee0) {
            ctx->pc = 0x1DD6F44u;
            goto label_1dd6f44;
        }
    }
    ctx->pc = 0x1DD6EE8u;
label_1dd6ee8:
    // 0x1dd6ee8: 0x240f002c  addiu       $t7, $zero, 0x2C
    ctx->pc = 0x1dd6ee8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_1dd6eec:
    // 0x1dd6eec: 0x8f848014  lw          $a0, -0x7FEC($gp)
    ctx->pc = 0x1dd6eecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dd6ef0: 0x26f8018  mult        $s0, $s3, $t7
    ctx->pc = 0x1dd6ef0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x1dd6ef4: 0x3c0e01dd  lui         $t6, 0x1DD
    ctx->pc = 0x1dd6ef4u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)477 << 16));
    // 0x1dd6ef8: 0x25d17614  addiu       $s1, $t6, 0x7614
    ctx->pc = 0x1dd6ef8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 14), 30228));
    // 0x1dd6efc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1dd6efcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd6f00: 0x26270014  addiu       $a3, $s1, 0x14
    ctx->pc = 0x1dd6f00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x1dd6f04: 0x2073821  addu        $a3, $s0, $a3
    ctx->pc = 0x1dd6f04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x1dd6f08: 0xc775b1a  jal         func_1DD6C68
    ctx->pc = 0x1DD6F08u;
    SET_GPR_U32(ctx, 31, 0x1DD6F10u);
    ctx->pc = 0x1DD6F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD6F08u;
    // 0x1dd6f0c: 0x2113021  addu        $a2, $s0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD6C68u, 0x1DD6F08u, 0x1DD6F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD6F10u;
label_1dd6f10:
    // 0x1dd6f10: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1DD6F10u;
    {
        const bool branch_taken_0x1dd6f10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD6F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD6F10u;
        // 0x1dd6f14: 0x8f8e8014  lw          $t6, -0x7FEC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd6f10) {
            ctx->pc = 0x1DD6F40u;
            goto label_1dd6f40;
        }
    }
    ctx->pc = 0x1DD6F18u;
    // 0x1dd6f18: 0x2307821  addu        $t7, $s1, $s0
    ctx->pc = 0x1dd6f18u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x1dd6f1c: 0x8de5fffc  lw          $a1, -0x4($t7)
    ctx->pc = 0x1dd6f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294967292)));
    // 0x1dd6f20: 0x8dc400dc  lw          $a0, 0xDC($t6)
    ctx->pc = 0x1dd6f20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 220)));
    // 0x1dd6f24: 0xc775b18  jal         func_1DD6C60
    ctx->pc = 0x1DD6F24u;
    SET_GPR_U32(ctx, 31, 0x1DD6F2Cu);
    ctx->pc = 0x1DD6F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD6F24u;
    // 0x1dd6f28: 0x24840140  addiu       $a0, $a0, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD6C60u, 0x1DD6F24u, 0x1DD6F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD6F2Cu;
label_1dd6f2c:
    // 0x1dd6f2c: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1dd6f2cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dd6f30: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x1dd6f30u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dd6f34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1dd6f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dd6f38: 0x1000ffcf  b           . + 4 + (-0x31 << 2)
    ctx->pc = 0x1DD6F38u;
    {
        const bool branch_taken_0x1dd6f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD6F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD6F38u;
        // 0x1dd6f3c: 0xa1ee0428  sb          $t6, 0x428($t7) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 15), 1064), (uint8_t)GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd6f38) {
            ctx->pc = 0x1DD6E78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dd6e78;
        }
    }
    ctx->pc = 0x1DD6F40u;
label_1dd6f40:
    // 0x1dd6f40: 0x26900390  addiu       $s0, $s4, 0x390
    ctx->pc = 0x1dd6f40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 912));
label_1dd6f44:
    // 0x1dd6f44: 0x240f0040  addiu       $t7, $zero, 0x40
    ctx->pc = 0x1dd6f44u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1dd6f48: 0x8e0e0014  lw          $t6, 0x14($s0)
    ctx->pc = 0x1dd6f48u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1dd6f4c: 0x15cf0005  bne         $t6, $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DD6F4Cu;
    {
        const bool branch_taken_0x1dd6f4c = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x1DD6F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD6F4Cu;
        // 0x1dd6f50: 0x8f8f8014  lw          $t7, -0x7FEC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd6f4c) {
            ctx->pc = 0x1DD6F64u;
            goto label_1dd6f64;
        }
    }
    ctx->pc = 0x1DD6F54u;
    // 0x1dd6f54: 0x8e8f0580  lw          $t7, 0x580($s4)
    ctx->pc = 0x1dd6f54u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1408)));
    // 0x1dd6f58: 0x55e0ffc3  bnel        $t7, $zero, . + 4 + (-0x3D << 2)
    ctx->pc = 0x1DD6F58u;
    {
        const bool branch_taken_0x1dd6f58 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dd6f58) {
            ctx->pc = 0x1DD6F5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DD6F58u;
            // 0x1dd6f5c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DD6E68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dd6e68;
        }
    }
    ctx->pc = 0x1DD6F60u;
    // 0x1dd6f60: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1dd6f60u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
label_1dd6f64:
    // 0x1dd6f64: 0x8de400dc  lw          $a0, 0xDC($t7)
    ctx->pc = 0x1dd6f64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 220)));
    // 0x1dd6f68: 0xc775b14  jal         func_1DD6C50
    ctx->pc = 0x1DD6F68u;
    SET_GPR_U32(ctx, 31, 0x1DD6F70u);
    ctx->pc = 0x1DD6F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD6F68u;
    // 0x1dd6f6c: 0x24840140  addiu       $a0, $a0, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD6C50u, 0x1DD6F68u, 0x1DD6F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD6F70u;
label_1dd6f70:
    // 0x1dd6f70: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1dd6f70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1dd6f74: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1dd6f74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1dd6f78: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1dd6f78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1dd6f7c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DD6F7Cu;
    {
        const bool branch_taken_0x1dd6f7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dd6f7c) {
            ctx->pc = 0x1DD6F80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DD6F7Cu;
            // 0x1dd6f80: 0x8f848014  lw          $a0, -0x7FEC($gp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DD6FA0u;
            goto label_1dd6fa0;
        }
    }
    ctx->pc = 0x1DD6F84u;
    // 0x1dd6f84: 0x8e0e0014  lw          $t6, 0x14($s0)
    ctx->pc = 0x1dd6f84u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1dd6f88: 0x240f003e  addiu       $t7, $zero, 0x3E
    ctx->pc = 0x1dd6f88u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x1dd6f8c: 0x11cf0003  beq         $t6, $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DD6F8Cu;
    {
        const bool branch_taken_0x1dd6f8c = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x1DD6F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD6F8Cu;
        // 0x1dd6f90: 0x240f003f  addiu       $t7, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd6f8c) {
            ctx->pc = 0x1DD6F9Cu;
            goto label_1dd6f9c;
        }
    }
    ctx->pc = 0x1DD6F94u;
    // 0x1dd6f94: 0x55cfffb4  bnel        $t6, $t7, . + 4 + (-0x4C << 2)
    ctx->pc = 0x1DD6F94u;
    {
        const bool branch_taken_0x1dd6f94 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        if (branch_taken_0x1dd6f94) {
            ctx->pc = 0x1DD6F98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DD6F94u;
            // 0x1dd6f98: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DD6E68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dd6e68;
        }
    }
    ctx->pc = 0x1DD6F9Cu;
label_1dd6f9c:
    // 0x1dd6f9c: 0x8f848014  lw          $a0, -0x7FEC($gp)
    ctx->pc = 0x1dd6f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
label_1dd6fa0:
    // 0x1dd6fa0: 0x908f0428  lbu         $t7, 0x428($a0)
    ctx->pc = 0x1dd6fa0u;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1064)));
    // 0x1dd6fa4: 0x55e0ffb0  bnel        $t7, $zero, . + 4 + (-0x50 << 2)
    ctx->pc = 0x1DD6FA4u;
    {
        const bool branch_taken_0x1dd6fa4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dd6fa4) {
            ctx->pc = 0x1DD6FA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DD6FA4u;
            // 0x1dd6fa8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DD6E68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dd6e68;
        }
    }
    ctx->pc = 0x1DD6FACu;
    // 0x1dd6fac: 0x240f002c  addiu       $t7, $zero, 0x2C
    ctx->pc = 0x1dd6facu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x1dd6fb0: 0x3c0e01dd  lui         $t6, 0x1DD
    ctx->pc = 0x1dd6fb0u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)477 << 16));
    // 0x1dd6fb4: 0x26f8018  mult        $s0, $s3, $t7
    ctx->pc = 0x1dd6fb4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x1dd6fb8: 0x25d17614  addiu       $s1, $t6, 0x7614
    ctx->pc = 0x1dd6fb8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 14), 30228));
    // 0x1dd6fbc: 0x26270014  addiu       $a3, $s1, 0x14
    ctx->pc = 0x1dd6fbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x1dd6fc0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1dd6fc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd6fc4: 0x2073821  addu        $a3, $s0, $a3
    ctx->pc = 0x1dd6fc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x1dd6fc8: 0xc775b1a  jal         func_1DD6C68
    ctx->pc = 0x1DD6FC8u;
    SET_GPR_U32(ctx, 31, 0x1DD6FD0u);
    ctx->pc = 0x1DD6FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD6FC8u;
    // 0x1dd6fcc: 0x2113021  addu        $a2, $s0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD6C68u, 0x1DD6FC8u, 0x1DD6FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD6FD0u;
label_1dd6fd0:
    // 0x1dd6fd0: 0x1040ffa4  beqz        $v0, . + 4 + (-0x5C << 2)
    ctx->pc = 0x1DD6FD0u;
    {
        const bool branch_taken_0x1dd6fd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD6FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD6FD0u;
        // 0x1dd6fd4: 0x8f8e8014  lw          $t6, -0x7FEC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd6fd0) {
            ctx->pc = 0x1DD6E64u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dd6e64;
        }
    }
    ctx->pc = 0x1DD6FD8u;
    // 0x1dd6fd8: 0x2307821  addu        $t7, $s1, $s0
    ctx->pc = 0x1dd6fd8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x1dd6fdc: 0x8de5fffc  lw          $a1, -0x4($t7)
    ctx->pc = 0x1dd6fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294967292)));
    // 0x1dd6fe0: 0x8dc400dc  lw          $a0, 0xDC($t6)
    ctx->pc = 0x1dd6fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 220)));
    // 0x1dd6fe4: 0xc775b18  jal         func_1DD6C60
    ctx->pc = 0x1DD6FE4u;
    SET_GPR_U32(ctx, 31, 0x1DD6FECu);
    ctx->pc = 0x1DD6FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD6FE4u;
    // 0x1dd6fe8: 0x24840140  addiu       $a0, $a0, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD6C60u, 0x1DD6FE4u, 0x1DD6FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD6FECu;
label_1dd6fec:
    // 0x1dd6fec: 0x8e8f081c  lw          $t7, 0x81C($s4)
    ctx->pc = 0x1dd6fecu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2076)));
    // 0x1dd6ff0: 0x15e00009  bnez        $t7, . + 4 + (0x9 << 2)
    ctx->pc = 0x1DD6FF0u;
    {
        const bool branch_taken_0x1dd6ff0 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DD6FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD6FF0u;
        // 0x1dd6ff4: 0x8f8f8014  lw          $t7, -0x7FEC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd6ff0) {
            ctx->pc = 0x1DD7018u;
            goto label_1dd7018;
        }
    }
    ctx->pc = 0x1DD6FF8u;
    // 0x1dd6ff8: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x1dd6ff8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dd6ffc: 0xa1ee042b  sb          $t6, 0x42B($t7)
    ctx->pc = 0x1dd6ffcu;
    WRITE8(ADD32(GPR_U32(ctx, 15), 1067), (uint8_t)GPR_U32(ctx, 14));
label_1dd7000:
    // 0x1dd7000: 0x928f09b0  lbu         $t7, 0x9B0($s4)
    ctx->pc = 0x1dd7000u;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2480)));
    // 0x1dd7004: 0x51e0ff98  beql        $t7, $zero, . + 4 + (-0x68 << 2)
    ctx->pc = 0x1DD7004u;
    {
        const bool branch_taken_0x1dd7004 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd7004) {
            ctx->pc = 0x1DD7008u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DD7004u;
            // 0x1dd7008: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DD6E68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dd6e68;
        }
    }
    ctx->pc = 0x1DD700Cu;
    // 0x1dd700c: 0xa28009b0  sb          $zero, 0x9B0($s4)
    ctx->pc = 0x1dd700cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2480), (uint8_t)GPR_U32(ctx, 0));
    // 0x1dd7010: 0x1000ff94  b           . + 4 + (-0x6C << 2)
    ctx->pc = 0x1DD7010u;
    {
        const bool branch_taken_0x1dd7010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD7014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD7010u;
        // 0x1dd7014: 0xa280040d  sb          $zero, 0x40D($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1037), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd7010) {
            ctx->pc = 0x1DD6E64u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dd6e64;
        }
    }
    ctx->pc = 0x1DD7018u;
label_1dd7018:
    // 0x1dd7018: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x1dd7018u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dd701c: 0x1000fff8  b           . + 4 + (-0x8 << 2)
    ctx->pc = 0x1DD701Cu;
    {
        const bool branch_taken_0x1dd701c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD7020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD701Cu;
        // 0x1dd7020: 0xa1ee042a  sb          $t6, 0x42A($t7) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 15), 1066), (uint8_t)GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd701c) {
            ctx->pc = 0x1DD7000u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dd7000;
        }
    }
    ctx->pc = 0x1DD7024u;
    // 0x1dd7024: 0x0  nop
    ctx->pc = 0x1dd7024u;
    // NOP
    ctx->pc = 0x1dd7028u;
}
