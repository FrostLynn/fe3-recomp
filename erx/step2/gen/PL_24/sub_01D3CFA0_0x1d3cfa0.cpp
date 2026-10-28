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

// Function: sub_01D3CFA0
// Address: 0x1d3cfa0 - 0x1d3d0b0
void sub_01D3CFA0_0x1d3cfa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D3CFA0_0x1d3cfa0");
#endif

    switch (ctx->pc) {
        case 0x1d3cfc8u: goto label_1d3cfc8;
        case 0x1d3d008u: goto label_1d3d008;
        case 0x1d3d05cu: goto label_1d3d05c;
        default: break;
    }

    ctx->pc = 0x1d3cfa0u;

    // 0x1d3cfa0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d3cfa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d3cfa4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d3cfa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d3cfa8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d3cfa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d3cfac: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d3cfacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d3cfb0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1d3cfb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3cfb4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1d3cfb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1d3cfb8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1d3cfb8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3cfbc: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d3cfbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d3cfc0: 0xc74ef16  jal         func_1D3BC58
    ctx->pc = 0x1D3CFC0u;
    SET_GPR_U32(ctx, 31, 0x1D3CFC8u);
    ctx->pc = 0x1D3CFC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3CFC0u;
    // 0x1d3cfc4: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BC58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BC58u, 0x1D3CFC0u, 0x1D3CFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3CFC8u;
label_1d3cfc8:
    // 0x1d3cfc8: 0x24500200  addiu       $s0, $v0, 0x200
    ctx->pc = 0x1d3cfc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1d3cfcc: 0x8e4f0004  lw          $t7, 0x4($s2)
    ctx->pc = 0x1d3cfccu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1d3cfd0: 0x8e0e004c  lw          $t6, 0x4C($s0)
    ctx->pc = 0x1d3cfd0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1d3cfd4: 0x26240160  addiu       $a0, $s1, 0x160
    ctx->pc = 0x1d3cfd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
    // 0x1d3cfd8: 0xae2f0184  sw          $t7, 0x184($s1)
    ctx->pc = 0x1d3cfd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 388), GPR_U32(ctx, 15));
    // 0x1d3cfdc: 0x26450020  addiu       $a1, $s2, 0x20
    ctx->pc = 0x1d3cfdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x1d3cfe0: 0x8dcd0084  lw          $t5, 0x84($t6)
    ctx->pc = 0x1d3cfe0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 132)));
    // 0x1d3cfe4: 0x240f0390  addiu       $t7, $zero, 0x390
    ctx->pc = 0x1d3cfe4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
    // 0x1d3cfe8: 0x8e4e0008  lw          $t6, 0x8($s2)
    ctx->pc = 0x1d3cfe8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1d3cfec: 0x1cf7018  mult        $t6, $t6, $t7
    ctx->pc = 0x1d3cfecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x1d3cff0: 0x1ae6821  addu        $t5, $t5, $t6
    ctx->pc = 0x1d3cff0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 14)));
    // 0x1d3cff4: 0x25af00f0  addiu       $t7, $t5, 0xF0
    ctx->pc = 0x1d3cff4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), 240));
    // 0x1d3cff8: 0x25ad0110  addiu       $t5, $t5, 0x110
    ctx->pc = 0x1d3cff8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 272));
    // 0x1d3cffc: 0xae2f0174  sw          $t7, 0x174($s1)
    ctx->pc = 0x1d3cffcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 372), GPR_U32(ctx, 15));
    // 0x1d3d000: 0xc74ef06  jal         func_1D3BC18
    ctx->pc = 0x1D3D000u;
    SET_GPR_U32(ctx, 31, 0x1D3D008u);
    ctx->pc = 0x1D3D004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3D000u;
    // 0x1d3d004: 0xae2d0170  sw          $t5, 0x170($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 368), GPR_U32(ctx, 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BC18u, 0x1D3D000u, 0x1D3D008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3D008u;
label_1d3d008:
    // 0x1d3d008: 0x8e4d0000  lw          $t5, 0x0($s2)
    ctx->pc = 0x1d3d008u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1d3d00c: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1d3d00cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1d3d010: 0x8e4e000c  lw          $t6, 0xC($s2)
    ctx->pc = 0x1d3d010u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1d3d014: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d3d014u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3d018: 0x1af6818  mult        $t5, $t5, $t7
    ctx->pc = 0x1d3d018u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x1d3d01c: 0xc6400030  lwc1        $f0, 0x30($s2)
    ctx->pc = 0x1d3d01cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d3d020: 0xae2e0188  sw          $t6, 0x188($s1)
    ctx->pc = 0x1d3d020u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 392), GPR_U32(ctx, 14));
    // 0x1d3d024: 0xe6200178  swc1        $f0, 0x178($s1)
    ctx->pc = 0x1d3d024u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 376), bits); }
    // 0x1d3d028: 0x8e4f0010  lw          $t7, 0x10($s2)
    ctx->pc = 0x1d3d028u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1d3d02c: 0xc6400034  lwc1        $f0, 0x34($s2)
    ctx->pc = 0x1d3d02cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d3d030: 0xae2f018c  sw          $t7, 0x18C($s1)
    ctx->pc = 0x1d3d030u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 396), GPR_U32(ctx, 15));
    // 0x1d3d034: 0xe6200180  swc1        $f0, 0x180($s1)
    ctx->pc = 0x1d3d034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 384), bits); }
    // 0x1d3d038: 0x8e4e0014  lw          $t6, 0x14($s2)
    ctx->pc = 0x1d3d038u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x1d3d03c: 0x8e0f00b4  lw          $t7, 0xB4($s0)
    ctx->pc = 0x1d3d03cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x1d3d040: 0xae2e0190  sw          $t6, 0x190($s1)
    ctx->pc = 0x1d3d040u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 400), GPR_U32(ctx, 14));
    // 0x1d3d044: 0xc6400018  lwc1        $f0, 0x18($s2)
    ctx->pc = 0x1d3d044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d3d048: 0x1ed7821  addu        $t7, $t7, $t5
    ctx->pc = 0x1d3d048u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 13)));
    // 0x1d3d04c: 0x8e4e0038  lw          $t6, 0x38($s2)
    ctx->pc = 0x1d3d04cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x1d3d050: 0xae2f017c  sw          $t7, 0x17C($s1)
    ctx->pc = 0x1d3d050u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 380), GPR_U32(ctx, 15));
    // 0x1d3d054: 0xe6200194  swc1        $f0, 0x194($s1)
    ctx->pc = 0x1d3d054u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 404), bits); }
    // 0x1d3d058: 0xae2e0198  sw          $t6, 0x198($s1)
    ctx->pc = 0x1d3d058u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 408), GPR_U32(ctx, 14));
label_1d3d05c:
    // 0x1d3d05c: 0xa7900  sll         $t7, $t2, 4
    ctx->pc = 0x1d3d05cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x1d3d060: 0x1f26021  addu        $t4, $t7, $s2
    ctx->pc = 0x1d3d060u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 18)));
    // 0x1d3d064: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1d3d064u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1d3d068: 0x8d8d0040  lw          $t5, 0x40($t4)
    ctx->pc = 0x1d3d068u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 64)));
    // 0x1d3d06c: 0x1f17821  addu        $t7, $t7, $s1
    ctx->pc = 0x1d3d06cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 17)));
    // 0x1d3d070: 0x294b0004  slti        $t3, $t2, 0x4
    ctx->pc = 0x1d3d070u;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1d3d074: 0xaded01a0  sw          $t5, 0x1A0($t7)
    ctx->pc = 0x1d3d074u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 416), GPR_U32(ctx, 13));
    // 0x1d3d078: 0x8d8e0044  lw          $t6, 0x44($t4)
    ctx->pc = 0x1d3d078u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 68)));
    // 0x1d3d07c: 0xadee01a4  sw          $t6, 0x1A4($t7)
    ctx->pc = 0x1d3d07cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 420), GPR_U32(ctx, 14));
    // 0x1d3d080: 0x8d8d0048  lw          $t5, 0x48($t4)
    ctx->pc = 0x1d3d080u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 72)));
    // 0x1d3d084: 0xaded01a8  sw          $t5, 0x1A8($t7)
    ctx->pc = 0x1d3d084u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 424), GPR_U32(ctx, 13));
    // 0x1d3d088: 0x8d8e004c  lw          $t6, 0x4C($t4)
    ctx->pc = 0x1d3d088u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 76)));
    // 0x1d3d08c: 0x1560fff3  bnez        $t3, . + 4 + (-0xD << 2)
    ctx->pc = 0x1D3D08Cu;
    {
        const bool branch_taken_0x1d3d08c = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3D090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3D08Cu;
        // 0x1d3d090: 0xadee01ac  sw          $t6, 0x1AC($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 428), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3d08c) {
            ctx->pc = 0x1D3D05Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d3d05c;
        }
    }
    ctx->pc = 0x1D3D094u;
    // 0x1d3d094: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d3d094u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d3d098: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d3d098u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d3d09c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d3d09cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d3d0a0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1d3d0a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d3d0a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D3D0A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3D0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3D0A4u;
        // 0x1d3d0a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3D0A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D3D0ACu;
    // 0x1d3d0ac: 0x0  nop
    ctx->pc = 0x1d3d0acu;
    // NOP
    ctx->pc = 0x1d3d0b0u;
}
